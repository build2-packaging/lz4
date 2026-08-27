# lz4 - LZ4 lossless compression

This is a `build2` package repository for [`lz4`](https://github.com/lz4/lz4),
a lossless compression algorithm with a fast C library and command line
utility.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`lz4` in your `build2`-based project, then instead see the accompanying
`PACKAGE-README.md` files:

* [`liblz4/PACKAGE-README.md`](liblz4/PACKAGE-README.md)
* [`lz4/PACKAGE-README.md`](lz4/PACKAGE-README.md)

The development setup for `lz4` uses the standard `bdep`-based workflow.
For example:

```
git clone .../lz4.git
cd lz4

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
