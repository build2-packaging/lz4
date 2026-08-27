# lz4 - An executable

This is a `build2` package for the [`<UPSTREAM-NAME>`](https://<UPSTREAM-URL>)
executable. It is a <SUMMARY-OF-FUNCTIONALITY>.

Note that the `lz4` executable in this package provides `build2` metadata.


## Usage

To start using `lz4` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * lz4 ^<VERSION>
```

Then import the executable in your `buildfile`:

```
import! [metadata] <TARGET> = lz4%exe{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
exe{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.lz4.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
