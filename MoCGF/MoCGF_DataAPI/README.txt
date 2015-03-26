
This folder is the package containing the data APIs.

To add an API just put a python module file here and add it to the
list __all__ in __init__.py.

An API module should at least contain ths string variables:

    description, version and author

and implement a function:

    def fetchData(uriList=[])

that returns a data model for the given data source URIs.
