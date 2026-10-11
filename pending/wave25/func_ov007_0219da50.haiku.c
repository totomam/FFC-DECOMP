#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *p, int v, uint32_t n);
extern char data_ov007_021c2d24[];

void *func_ov007_0219da50(uint32_t a, volatile uint32_t b, volatile uint32_t c, uint8_t d, uint32_t e) {
    uint32_t *p = func_0205681c(0x48);
    if (p != 0) {
        uint32_t bv;
        uint32_t cv;
        func_0206aa58(p, 0, e);
        bv = b;
        p[0] = (uint32_t)data_ov007_021c2d24;
        p[14] = a;
        cv = c;
        p[15] = bv;
        p[16] = cv;
        *((uint8_t *)p + 0x44) = d;
    }
    return p;
}
