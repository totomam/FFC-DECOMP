#include "ffc/types.h"

typedef struct {
    uint32_t state[4];
    uint32_t count[2];
} MD5Ctx;

uint32_t func_ov006_021a28c4(MD5Ctx *ctx)
{
    ctx->count[1] = 0;
    ctx->count[0] = 0;
    ctx->state[0] = 0x67452301;
    ctx->state[1] = 0xefcdab89;
    ctx->state[2] = 0x98badcfe;
    ctx->state[3] = 0x10325476;
}
