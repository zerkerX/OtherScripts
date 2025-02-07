# OOther Scripts

Various other scripts from "Ryan's Tools" suite.

... and one tiny C program.

Overall dependencies to install these tools:

* `txt2man` to generate manual pages
* any C compiler that can be run by calling `cc`
* a Python interpreter that can be run with `python3`

To install to `/usr/local`, simply run `install.sh` (likely with sudo).
This will also generate the manual pages.

To uninstall later, run `uninstall.sh`.

Run either with the `PREFIX` variable set to a value to install to an alternate
location. Example:

```shell
# PREFIX=/usr ./install.sh
```

or

```shell
$ PREFIX=/home/youruser/.local ./install.sh
```

Refer to manpages for details on any individual tool and its direct dependencies.
