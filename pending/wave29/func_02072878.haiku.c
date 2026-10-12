#include "ffc/types.h"

extern void func_020729b0(void);
extern void func_02072a3c(void);
extern void func_02072a24(void);
extern uint32_t func_ov000_0215b06c(int a, uint32_t b, uint32_t c, uint8_t d, void *e, void *f, void *g, void *h, void *i, void *j, uint32_t k, uint32_t l, uint32_t m);

void func_02072878(uint8_t *p)
{
    uint32_t r;
    uint32_t a = *(uint32_t *)(p + 0x88);
    uint32_t b = *(uint32_t *)(p + 0x8c);
    uint8_t c = (uint8_t)*(uint32_t *)(p + 0x84);
    r = func_ov000_0215b06c(2, a, b, c,
                            (void *)func_020729b0, p, (void *)func_02072a3c, p, (void *)func_02072a24, p, 0, 0, 0);
    *(uint32_t *)(p + 0xa8) = r;
    *(uint8_t *)(*(uint8_t **)(p + 0x80) + 0x23) = 0;
}
