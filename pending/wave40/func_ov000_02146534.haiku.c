#include "ffc/types.h"

extern void *func_ov000_02145764(uint32_t v);
extern int func_ov000_02145a4c(void);
extern void func_ov000_02145ad0(void *p);
extern void func_ov000_02145e18(void *a, void *b, int c, int d, uint32_t v, int flag);

void func_ov000_02146534(uint8_t *a, uint8_t *b, void *c)
{
    uint32_t v;
    void *r;
    uint32_t t;
    v = ((uint32_t)(uint16_t)((*(uint16_t *)(a + 0xc) >> 8) | (*(uint16_t *)(a + 0xc) << 8)) << 16)
        | (uint16_t)((*(uint16_t *)(a + 0xe) >> 8) | (*(uint16_t *)(a + 0xe) << 8));
    r = func_ov000_02145764(v);
    if (r == 0) {
        return;
    }
    if (func_ov000_02145a4c() == 0) {
        func_ov000_02145ad0(r);
        return;
    }
    t = *(uint16_t *)(b + 2);
    b[0] = 0;
    t += 8;
    *(uint16_t *)(b + 2) = (uint16_t)(t + (t >> 16));
    v = ((uint32_t)(uint16_t)((*(uint16_t *)(a + 0xc) >> 8) | (*(uint16_t *)(a + 0xc) << 8)) << 16)
        | (uint16_t)((*(uint16_t *)(a + 0xe) >> 8) | (*(uint16_t *)(a + 0xe) << 8));
    func_ov000_02145e18(b, c, 0, 0, v, 1);
}
