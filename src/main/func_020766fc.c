#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_020b27fc[];

void *func_020766fc(void *p, uint32_t a, uint32_t b) {
    uint8_t *q = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(void **)q = data_020b27fc;
    *(uint32_t *)(q + 0x80) = a;
    *(uint32_t *)(q + 0x84) = b;
    *(uint32_t *)(q + 0x88) = 0;
    return p;
}
