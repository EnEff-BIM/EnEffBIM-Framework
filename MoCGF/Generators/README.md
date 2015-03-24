MoCFG: Generator Packages
=========================

MoCGFs generators are bundles of files that are specific to an output
configuration (like a special modelica library or a specific input data API).

Generators are loaded from a folder (usually this folder). When using the
provided command line or graphical interface you may adjust the folder with
the environment variable MOCGF_GENERATORS.

A generator may be:

1. a subfolder or
2. a zip file

containing a file Package.inf and a special folder structure.

Documentation will follow soon, please have a look at the examples for now. The
easiest way to create a generator is to create a copy of an existing generator
and adjust the contents.
