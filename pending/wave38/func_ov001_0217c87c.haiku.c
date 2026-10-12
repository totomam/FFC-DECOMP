#include "ffc/types.h"

typedef struct {
    void *ptr;
    uint32_t count;
} Ctx;

extern int func_ov001_0217c8f0(void *self, int val, uint32_t *out);
extern int func_ov000_02168abc(void *ptr, uint32_t *buf);

int func_ov001_0217c87c(void *self, int val)
{
    uint32_t out;
    uint32_t r;
    Ctx *ctx;

    ctx = (Ctx *)((uint8_t *)*(void **)self + 0x5c8);
    if (val <= 0) {
        return 0;
    }
    if (func_ov001_0217c8f0(self, val, &out) != 0) {
        return out;
    }
    {
        uint32_t buf[12] = {0};
        buf[0] = val;
        buf[1] = 0;
        buf[4] = 0;
        buf[5] = 0;
        buf[7] = 0;
        buf[6] = 0;
        buf[11] = 0;
        func_ov000_02168abc(ctx->ptr, buf);
        ctx->count++;
    }
    r = 0;
    if (func_ov001_0217c8f0(self, val, &out) != 0) {
        r = out;
    }
    return r;
}
