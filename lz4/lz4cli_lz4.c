#define main xmain
#include "programs/lz4cli.c"
#undef main

int main(int argc, const char** argv) {
  if (argc == 2 && strncmp(argv[1], "--build2-metadata=", 18) == 0) {
    printf("# build2 buildfile lz4\n");
    printf("export.metadata = 1 lz4\n");
    printf("lz4.name = [string] lz4\n");
    printf("lz4.version = [string] '%s'\n", BUILD2_LZ4_VERSION);
    printf("lz4.checksum = [string] '%s'\n", BUILD2_LZ4_VERSION);
    return 0;
  }

  return xmain(argc, argv);
}
