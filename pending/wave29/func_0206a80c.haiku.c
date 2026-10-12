#include "ffc/types.h"

extern uint32_t data_020b1b94[];
extern void func_02056858(uint32_t v);
extern void func_020235ac(uint32_t *a, void *r1, uint32_t *b, uint32_t **c);
extern void func_02054c90(void *p);
extern void func_02056844(void *p);

void *func_0206a80c(void *p)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t *r1;
    uint32_t *q;
    uint32_t v;
    uint32_t x;

    *(uint32_t *)s = (uint32_t)data_020b1b94;
    func_02056858(*(uint32_t *)(s + 0xe0));

    r1 = (uint32_t *)(s + 0xc);
    q = r1 + 1;
    v = r1[2];
    func_020235ac(&x, r1, &v, &q);

    func_02054c90(s);
    func_02056844(s);
    return s;
}
