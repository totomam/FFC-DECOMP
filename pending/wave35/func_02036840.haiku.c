#include "ffc/types.h"

extern void *func_020903cc();

void func_02036840(uint8_t *a, uint8_t *b) {
    uint32_t i;
    uint32_t f;
    uint32_t n;
    uint16_t *s;

    func_020903cc(a + 4, 0, 0x2a);
    i = 0;
    goto cond;
body:
    if (f == 0) {
        s = (uint16_t *)(b + 2);
    } else {
        s = *(uint16_t **)(b + 8);
    }
    {
        uint16_t *p = (uint16_t *)a + i;
        p[2] = s[i];
    }
    i++;
cond:
    f = (*(uint32_t *)b << 31) >> 31;
    if (f) {
        n = *(uint32_t *)(b + 4);
    } else {
        n = (*(uint8_t *)b >> 1) & 0x7f;
    }
    if (i < n) {
        goto body;
    }
}
