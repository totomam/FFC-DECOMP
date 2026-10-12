#include "ffc/types.h"

extern void func_0200a82c(void *p, int32_t a, int32_t b, int32_t c, int32_t d);

void func_0200ce10(int32_t *out, uint8_t *p, int32_t x, int32_t y) {
    int32_t *px;
    int32_t base;
    int32_t diff;
    uint8_t b;
    uint8_t c;
    uint8_t *pb;
    uint8_t *pc;

    px = &x;
    pb = &b;
    pc = &c;
    if (*(uint32_t *)p & 1) {
        base = *(int32_t *)(p + 8);
    } else {
        base = (int32_t)(p + 2);
    }
    diff = *px - base;
    *pb = *pc;
    func_0200a82c(p, (diff + ((uint32_t)diff >> 31)) >> 1, 1, 0, 0);
    *out = *px;
}
