#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 201500225 Joerg Raedler jraedler@udk-berlin.de
#

import sys, os, argparse
from MoCGF.Controller import Controller

descr = """
MoCGF is a framework to generate source code from data sources.
It is developed in the EnEff-BIM project to generate Modelica code from SimModel data.
MoCGF-cli is the command line interface to MoCGF. MoCGF-gui provides a graphical interface."""


nl = os.linesep

def main():
    """main function when MoCGF is used on the command line"""
    parser = argparse.ArgumentParser(description=descr)
    grp = parser.add_argument_group('path settings')
    grp.add_argument('-p', '--search-path', metavar='PATH', help='search path for generators (separated by ;)')
    grp = parser.add_argument_group('general information')
    grp.add_argument('-a', '--list-apis', action='store_true', help='list available data APIs')
    grp.add_argument('-l', '--list-generators', action='store_true', help='list available code generators')
    grp.add_argument('-d', '--debug', metavar='LEVEL', help='set debug level to show on stderr (1...5)')
    grp = parser.add_argument_group('generator actions')
    grp.add_argument('-g', '--generator', metavar='GEN', nargs=1, help='select generator GEN (needed for the following actions)')
    grp.add_argument('-o', '--output', metavar='FILE', nargs=1, help='use FILE for output instead of stdout')
    grp.add_argument('-m', '--mapping-rules', action='store_true', help='extract mapping rules to stdout (needs -g)')
    grp.add_argument('-s', '--show-generator', action='store_true', help='show information on generator (needs -g)')
    grp.add_argument('data_source', metavar='dataSource', type=str, default='', nargs='*',
                        help='execute the generator with these data source URIs passed to the data API (needs -g)')
    args = parser.parse_args()

    gp = args.search_path or os.environ.get('MOCGF_GENERATORS', '')
    generatorPath = [p for p in gp.split(';') if p]

    logLevel = 0
    if args.debug:
        logLevel = 10 * int(args.debug)

    mocgf = Controller(generatorPath, logLevel=logLevel)

    if args.list_apis:
        for n in sorted(mocgf.apis):
            a = mocgf.apis[n]
            print('%s%s (%s):%s\t%s' % (nl, n, a.author, nl, a.description))
        print()
        return 0
    elif args.list_generators:
        for n in sorted(mocgf.generators):
            g = mocgf.generators[n]
            print('%s%s (%s):%s\t%s' % (nl, n, g.author, nl, g.description))
        print()
        return 0

    # from here we need a valid generator name!
    if not args.generator:
        parser.error('Please specify a generator with -g or --generator or get help with -h!'+nl)
    if not args.generator[0] in mocgf.generators:
        parser.error('This generator is not valid, list choices with -l!'+nl)
    g = mocgf.generators[args.generator[0]]

    if args.output:
        outFile = open(args.output[0], 'w')
    else:
        outFile = sys.stdout

    if args.show_generator:
        # FIXME
        print(g.infoText('txt'))
        return 0
    elif args.mapping_rules:
        for f in g.getMappingRules():
            outFile.write(f.read())
            f.close()
        return 0
    elif args.data_source:
        outFile.write(g.execute(args.data_source).read())
        return 0
    else:
        parser.print_help()
