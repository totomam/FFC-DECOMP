#include "ffc/types.h"

extern void func_020514e8(void *out, void *a, void *b, uint16_t *p);

void func_0205134c(void *a0, uint16_t *a1, uint16_t *a2, uint32_t a3) {
    uint32_t buf[2];
    uint16_t *p;
    uint32_t *pa3 = &a3;
    uint16_t **pp = &a1;
    uint16_t **qq = &a2;
    if (*pp != *qq) {
        p = *pp;
        do {
            func_020514e8(&buf[1], a0, (uint8_t *)a0 + 4, p);
            p++;
        } while (p != *qq);
    }
}
