#include "ffc/types.h"

extern int func_ov001_02181620(void *a, int b, uint32_t c, uint32_t *d);
extern int func_ov001_021816dc(void *a);

int func_ov001_021818f8(void *a)
{
    uint32_t local;
    uint8_t *p = (uint8_t *)a;
    uint8_t *q = *(uint8_t **)(p + 8);
    uint32_t v = *(uint32_t *)(q + 0x44);

    if (func_ov001_02181620(a, 6, v + 7, &local) == 0) {
        return 0;
    }
    if (local != 0) {
        return 1;
    }
    if (func_ov001_021816dc(a) != 0) {
        return 1;
    }
    return 0;
}
