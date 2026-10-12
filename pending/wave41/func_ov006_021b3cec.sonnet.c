#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Entry;

typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    Entry *entries;
    uint8_t count;
} Ctx;

void func_ov006_021b3cec(Ctx *ctx, int idx, uint32_t b, uint8_t a)
{
    Entry tmp[2];
    Entry *e = ctx->entries;
    uint32_t w;
    uint32_t oldb;
    uint32_t olda;
    uint32_t da;
    uint32_t db;
    int i;

    if (idx >= 0) {
        e[idx].w0 = (e[idx].w0 & 0xfe00ff00) | a | ((b & 0x1ff) << 16);
        return;
    }

    tmp[0] = e[0];
    w = tmp[0].w0;
    oldb = (w & 0x1ff0000) >> 16;
    olda = w & 0xff;
    da = a - olda;
    db = b - oldb;
    e[0].w0 = (w & 0xfe00ff00) | a | ((b & 0x1ff) << 16);

    for (i = 1; i < ctx->count; i++) {
        w = e[i].w0;
        oldb = (w & 0x1ff0000) >> 16;
        olda = w & 0xff;
        e[i].w0 = (w & 0xfe00ff00) | ((olda + da) & 0xff) | (((oldb + db) << 16) & 0x1ff0000);
    }
}
