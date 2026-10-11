#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern uint32_t data_ov003_0217bbe8;

void *func_ov003_02176ca0(void *p, uint32_t b) {
    uint32_t *w = (uint32_t *)p;
    func_02056c9c(p, 0);
    w[0] = (uint32_t)&data_ov003_0217bbe8;
    w[0x80 / 4] = b;
    w[0x84 / 4] = 0;
    w[0x88 / 4] = 0;
    w[0x8c / 4] = 0;
    return p;
}
