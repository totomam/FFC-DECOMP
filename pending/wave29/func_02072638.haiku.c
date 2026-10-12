#include "ffc/types.h"

extern void func_020727bc(void);
extern void func_020727a4(void);
extern void func_0207276c(void);
extern uint32_t func_ov000_0215afe8(int a, uint8_t b, uint32_t c, void (*d)(void), void *e, void (*f)(void), void *g, void (*h)(void), void *i, uint32_t j, uint32_t k, uint32_t l);

void func_02072638(void *p) {
    uint32_t r;
    uint8_t *q = (uint8_t *)p;
    r = func_ov000_0215afe8(2, (uint8_t)*(uint32_t *)(q + 0x84),
                            *(uint32_t *)(q + 0x80) + 0x26, func_0207276c,
                            p, func_020727bc, p, func_020727a4, p, 0, 0, 0);
    *(uint32_t *)(q + 0x9c) = r;
    *(uint8_t *)(*(uint32_t *)(q + 0x80) + 0x23) = 0;
}
