#include "ffc/types.h"

extern void func_0205729c(uint8_t *p);

void func_02059cec(uint8_t *p) {
    volatile uint32_t loc[4];
    uint32_t a, b;
    uint8_t *q;
    func_0205729c(p);
    a = *(uint32_t *)(p + 0x34);
    b = *(uint32_t *)(p + 0x38);
    q = *(uint8_t **)(p + 0x54);
    loc[2] = a;
    *(uint32_t *)(q + 0x1c) = a;
    loc[3] = b;
    loc[0] = a;
    loc[1] = b;
    *(uint32_t *)(q + 0x20) = b;
}
