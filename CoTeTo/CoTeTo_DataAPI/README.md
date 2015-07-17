CoTeTo - Data API
=================

This folder contains the python package with the data APIs for CoTeTo.

To add an API just put a python module file here and add it to the
list `__all__` in the file `__init__.py`.

A data API module needs to define the following items:

1. `name` - the name of the API (string)
2. `version` - the version (string)
3. `description` - a short text with the description of the API (string)
4. `author` - the author information (string)
5. `helptxt` - information on the usage of the API (string)
6. `fetchData(uriList, systemCfg, generatorCfg, logger)` - a function

The function `fetchData(...)` is the main part of the API. It returns
data as a dictionary for the given set of addresses. The address information is
provided in the list `uriList`, the exact type of this information depends on
the API.

`systemCFG` is a dictionary with global information about the platform and
software versions.

`generatorCFG` is the `ConfigParser` object with the information from the
generators file `Package.inf`. The API can access all settings stored in this
file.

`logger` is a logger from pythons `logging` module. The API shuold send all messages (warnings, errors, ...) to this system.
