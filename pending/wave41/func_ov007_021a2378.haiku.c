#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern int func_0206cb98(uint32_t x);
extern uint32_t func_0206cb80(uint32_t x);
extern void *func_02056830(uint32_t size);
extern uint32_t data_ov007_021c3c90[];
extern uint32_t data_020a6630[];
extern uint32_t data_ov007_021c4104[];

void *func_ov007_021a2378(void *p, uint32_t arg) {
    uint32_t *o = (uint32_t *)p;
    uint32_t a, b;
    func_02056c9c(p, 0);
    o[0] = (uint32_t)data_ov007_021c3c90;
    a = data_020a6630[0];
    b = data_020a6630[1];
    o[0x80 / 4] = a;
    o[0x84 / 4] = b;
    o[0x88 / 4] = arg;
    o[0x8c / 4] = 0;
    if (func_0206cb98(arg) == 0) {
        o[0x8c / 4] = (uint32_t)func_02056830(func_0206cb80(o[0x88 / 4]) * 0x2c);
        a = data_ov007_021c4104[0];
        b = data_ov007_021c4104[1];
        o[0x80 / 4] = a;
        o[0x84 / 4] = b;
    } else {
        o[3] = (o[3] & ~0xffu) | 2;
    }
    return p;
}
