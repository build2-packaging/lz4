# lz4 - LZ4 lossless compression command line utility

This is a `build2` package for the [`lz4`](https://github.com/lz4/lz4)
executable. It is a command line interface for the LZ4 lossless compression
algorithm.

Note that the `lz4` executable in this package provides `build2` metadata.
Upstream command names `lz4c`, `lz4cat`, and `unlz4` are installed as links
to the same binary.


## Usage

To start using `lz4` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * lz4 ^1.10.0
```

Then import the executable in your `buildfile`:

```
import! [metadata] lz4 = lz4%exe{lz4}
```


## Importable targets

This package provides the following importable targets:

```
exe{lz4}
```

This is the LZ4 command line utility. Legacy `lz4c` mode is selected from
the executable file name.


## Configuration variables

This package provides no configuration variables.
