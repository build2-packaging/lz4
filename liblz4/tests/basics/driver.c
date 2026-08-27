#include <lz4.h>
#include <lz4hc.h>
#include <lz4frame.h>

#include <string.h>

#undef NDEBUG
#include <assert.h>

int
main (void)
{
  char const src[] = "LZ4 compression smoke test payload";
  int const src_size = (int) sizeof (src);
  int const dst_cap = LZ4_compressBound (src_size);
  char dst[1024];
  char out[1024];

  assert (dst_cap > 0);
  assert (dst_cap <= (int) sizeof (dst));

  {
    int const n = LZ4_compress_default (src, dst, src_size, dst_cap);
    assert (n > 0);

    int const m = LZ4_decompress_safe (dst, out, n, (int) sizeof (out));
    assert (m == src_size);
    assert (memcmp (src, out, (size_t) src_size) == 0);
  }

  {
    int const n = LZ4_compress_HC (src, dst, src_size, dst_cap, 9);
    assert (n > 0);

    int const m = LZ4_decompress_safe (dst, out, n, (int) sizeof (out));
    assert (m == src_size);
    assert (memcmp (src, out, (size_t) src_size) == 0);
  }

  assert (LZ4_versionNumber () >= 11000);
  assert (LZ4F_getVersion () != 0);

  return 0;
}
