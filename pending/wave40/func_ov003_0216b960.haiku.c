#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_02164724(void *p, void *ctx, uint32_t a, uint32_t b, uint32_t c,
                                uint32_t d, uint32_t e, uint32_t f, uint32_t g);

void func_ov003_0216b960(void *ctx, uint8_t *in)
{
    uint32_t n = *(uint32_t *)(in + 4);
    uint32_t off = *(uint32_t *)(in + 8);
    uint32_t *arr = (uint32_t *)(in + off);
    uint32_t v0 = arr[0];
    uint32_t v1 = arr[1];
    uint32_t v2 = arr[2];
    uint32_t w = (n > 3) ? arr[3] : 1;
    uint32_t r6 = (n > 4) ? arr[4] : 0;
    uint32_t r4 = (n > 5) ? arr[5] : 0;
    uint32_t r5 = (n > 6) ? arr[6] : 0;
    void *p = func_0205681c(0x9c);
    if (p != 0) {
        func_ov003_02164724(p, ctx, (uint16_t)v0, v1, v2, (uint16_t)w, r6, r4, r5);
    }
}
