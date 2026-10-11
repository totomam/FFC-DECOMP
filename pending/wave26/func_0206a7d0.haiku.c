#include "ffc/types.h"

extern uint8_t data_020b1b94[];
extern void func_02056858(uint32_t v);
extern void func_020235ac(void *a, void *b, void *c, void *d);
extern void func_02054c90(void *p);

void *func_0206a7d0(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint8_t *q;
    uint32_t tmp[3];
    *(uint8_t **)p = data_020b1b94;
    func_02056858(*(uint32_t *)(p + 0xe0));
    q = p + 0xc;
    tmp[2] = (uint32_t)(q + 4);
    tmp[1] = *(uint32_t *)(q + 8);
    func_020235ac(tmp, q, &tmp[1], &tmp[2]);
    func_02054c90(p);
    return p;
}
