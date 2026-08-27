# liblz4 - LZ4 lossless compression C library

This is a `build2` package for the [`lz4`](https://github.com/lz4/lz4)
C library. It provides a lossless compression algorithm with compression
speed above 500 MB/s per core and decompression in multiple GB/s per core.


## Usage

To start using `liblz4` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: liblz4 ^1.10.0
```

Then import the library in your `buildfile`:

```
import libs = liblz4%lib{lz4}
```


## Importable targets

This package provides the following importable targets:

```
lib{lz4}
```

This is the compiled LZ4 library (block, high-compression, frame, and file
APIs). Public headers are included as `<lz4.h>`, `<lz4hc.h>`, `<lz4frame.h>`,
`<lz4frame_static.h>`, and `<lz4file.h>`.


## Configuration variables

This package provides no configuration variables.
