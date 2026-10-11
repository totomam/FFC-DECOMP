#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t size);

typedef struct {
    uint32_t h[5];
    uint8_t rest[0x5c - 0x14];
} Sha1Ctx;

void func_ov000_0214c434(Sha1Ctx *ctx)
{
    func_02084b2c(ctx, 0, 0x5c);
    ctx->h[0] = 0x67452301;
    ctx->h[1] = 0xefcdab89;
    ctx->h[2] = 0x98badcfe;
    ctx->h[3] = 0x10325476;
    ctx->h[4] = 0xc3d2e1f0;
}
