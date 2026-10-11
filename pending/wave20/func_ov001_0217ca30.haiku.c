#include "ffc/types.h"

extern void func_ov001_0217ca70(void *a, void *cb, void *ctx, uint32_t *d);
extern void func_ov001_0217c9fc(void);

int func_ov001_0217ca30(void *a, uint32_t b, uint32_t c, uint32_t *d)
{
    struct {
        uint32_t x;
        uint32_t y;
        uint32_t *z;
        uint32_t done;
    } ctx;

    ctx.x = b;
    ctx.y = c;
    ctx.done = 0;
    ctx.z = d;
    func_ov001_0217ca70(a, (void *)func_ov001_0217c9fc, &ctx, d);
    if (ctx.done == 0) {
        *d = 0;
    }
    return 0;
}
