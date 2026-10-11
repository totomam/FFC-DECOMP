#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217abcc[];

void *func_ov003_02167c0c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    func_02056c9c(p, 0);
    *(void **)p = data_ov003_0217abcc;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
    *(uint32_t *)(p + 0x88) = c;
    *(uint32_t *)(p + 0x8c) = d;
    *(uint32_t *)(p + 0x90) = 0;
    return p;
}
