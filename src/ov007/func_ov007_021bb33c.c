#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b, uint32_t c);
extern uint8_t data_ov007_021c79dc[];

void *func_ov007_021bb33c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    uint32_t *q;
    func_020694ac(p, 0, 0, c);
    *(uint8_t **)p = data_ov007_021c79dc;
    *(uint32_t *)(p + 0xb8) = a;
    *(uint32_t *)(p + 0xbc) = b;
    *(uint32_t *)(p + 0xc0) = c;
    *(uint32_t *)(p + 0xc4) = d;
    *(uint32_t *)(p + 0xcc) = 0;
    *(uint32_t *)(p + 0xd4) = 0;
    *(uint32_t *)(p + 0xd8) = 0;
    q = (uint32_t *)(p + 0xf0);
    *q = 0;
    q[1] = 0;
    q[2] = 0;
    p[0x13c] = 0;
    return p;
}
