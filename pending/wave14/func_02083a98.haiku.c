#include "ffc/types.h"

typedef struct {
    uint32_t h0;
    uint32_t h1;
    uint32_t h2;
    uint32_t h3;
    uint32_t c0;
    uint32_t c1;
} MD5Ctx;

void func_02083a98(MD5Ctx *ctx)
{
    ctx->h0 = 0x67452301;
    ctx->c0 = 0;
    ctx->h1 = 0xefcdab89;
    ctx->c1 = 0;
    ctx->h2 = 0x98badcfe;
    ctx->h3 = 0x10325476;
}
