#include "ffc/types.h"

extern void func_02056c9c(uint32_t *p, uint32_t x);
extern uint32_t data_ov003_0217bcb0[];

uint32_t *func_ov003_02177514(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov003_0217bcb0;
    p[0x80 / 4] = a;
    p[0x84 / 4] = b;
    p[0x88 / 4] = c;
    p[0x8c / 4] = d;
    p[0x90 / 4] = 0;
    p[0x94 / 4] = 0;
    return p;
}
