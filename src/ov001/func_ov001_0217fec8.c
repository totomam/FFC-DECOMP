#include "ffc/types.h"

extern void func_ov001_02181ddc(void *p);

int func_ov001_0217fec8(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g)
{
    uint8_t *s = (uint8_t *)a;
    uint8_t *o = (uint8_t *)b;

    if (a == 0 || b == 0) {
        return 1;
    }
    if (*(void **)(s + 0x20) == 0) {
        return 1;
    }
    if (g == 0 || f == 0) {
        f = 0;
        g = 0;
    }
    *(uint32_t *)(s + 0x1c) += 1;
    *(uint32_t *)(o + 0x24) += 1;
    ((void (*)(void *, void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(void **)(s + 0x20)))(a, b, c, d, e, f, g);
    *(uint32_t *)(s + 0x1c) -= 1;
    *(uint32_t *)(o + 0x24) -= 1;
    if (*(void **)(s + 0x14) != 0 && *(uint32_t *)(s + 0x1c) == 0) {
        func_ov001_02181ddc(a);
        return 0;
    }
    return 1;
}
