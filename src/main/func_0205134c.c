#include "ffc/types.h"

extern void func_020514e8(void *out, void *a, void *b, uint16_t *p);

void func_0205134c(uint8_t *a0, uint16_t *a1, uint16_t *a2, uint32_t a3) {
    uint32_t buf[2];
    uint16_t **ap = &a1;
    uint16_t *e;
    uint16_t *p = ap[0];
    int ne = (p != ap[1]);
    if (ne) {
        if (ne) {
        e = *(uint16_t **)((uint8_t *)&a1 + 4);
        do {
            func_020514e8(&buf[1], a0, a0 + 4, p);
            p++;
        } while (p != e);
        }
    }
}
