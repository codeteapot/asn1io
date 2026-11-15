# ASN.1 I/O Library for C++

The Markdown stuff is all well and good, but I’d refer to
[the manual](https://codeteapot.github.io/asn1io/manual/).

## Contributing

Nothing is set in stone. The author decides as they go along.

### Building

The build is tested on a Debian "trixie" with the following packages,

* autoconf
* autoconf-archive
* automake1.11
* pkg-config
* libtool
* g++
* dejagnu

in order to build it, and

* doxygen
* texlive-latex-extra
* texlive-font-utils
* dot2tex

in order to generate the documentation.

If we want to build it on a `stage` directory, we may do the following

```sh
autoreconf --install
```
```sh
./configure --prefix=$PWD/stage
```

Then, we can execute

* `make` to build it,
* `make check` to run tests,
* `make install` to put result files on stage directory,
* `make doxygen-doc` to generate documentation

and so on.
