#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_0204e7ac(uint32_t v);
extern void func_02087678(uint8_t *p);
extern uint8_t *data_0209e698[];

void func_0204f584(uint8_t *p) {
    struct {
        uint32_t t;
        uint8_t *q;
        volatile uint8_t flag;
    } loc;
    uint32_t i;
    uint8_t *tp;
    uint32_t w;
    uint16_t v;
    uint16_t *reg;

    loc.q = p + 0x7c;
    loc.flag = 1;
    if (loc.flag) {
        func_0208763c();
    }
    tp = (uint8_t *)&loc.t;

    for (i = 1; i < 10; i++) {
        w = *(uint32_t *)(p + 0x74);
        if ((w >> 31) && ((w << 14) >> 30) == i - 1) {
            *tp = 0;
            loc.t |= 0x80;
            *data_0209e698[i] = *tp;
        } else {
            *data_0209e698[i] = p[0x34 + i * 4];
        }
    }

    w = *(uint32_t *)(p + 0x74);
    if (w >> 31) {
        *(uint32_t *)0x04000064 = w;
        *(uint32_t *)(p + 0x74) = *(uint32_t *)(p + 0x74) & 0x7fffffff;
    }

    func_0204e7ac(*(uint32_t *)(p + 0x20));
    func_0204e7ac(*(uint32_t *)(p + 0x24));

    v = *(uint16_t *)(p + 0x5c);
    if (*(p + 0x78)) {
        v ^= 0x8000;
    }
    reg = (uint16_t *)0x04000304;
    *reg = (v & 0xfdf0) | (*reg & 0x020f);

    if (loc.flag) {
        func_02087678(loc.q);
    }
}
