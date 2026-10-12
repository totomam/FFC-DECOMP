#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217bda0[];
extern uint32_t data_ov003_0217be0c[];

void *func_ov003_021785b0(uint8_t *p, uint32_t a, uint32_t b) {
    uint32_t *w;
    uint8_t i;
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov003_0217bda0;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0xb8) = a;
    *(uint32_t *)(p + 0xbc) = b;
    *(uint32_t *)(p + 0xc0) = 0;
    *(uint8_t *)(p + 0xc4) = 1;
    *(uint8_t *)(p + 0xc6) = 0;
    i = 0;
    do {
        *(uint32_t *)(p + 0x8c + i * 4) = 0;
        *(uint8_t *)(p + 0x98 + i) = 0;
        i++;
    } while (i < 3);
    w = (uint32_t *)p;
    w[32] = data_ov003_0217be0c[0];
    w[33] = data_ov003_0217be0c[1];
    return p;
}
