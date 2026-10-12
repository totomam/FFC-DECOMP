#include "ffc/types.h"

extern void *func_0207ac88(void *a, void *b, void *fn, uint32_t c, uint32_t d);
extern uint32_t func_0207abbc(void *a, void *b);
extern void func_02077aa4(void *dst, void *src);
extern void func_02079fe0(void);
extern uint8_t data_0213e6a4[];

uint32_t func_0207986c(uint32_t a, void *b, void *c)
{
    uint32_t *r4;
    uint32_t r0;

    r4 = (uint32_t *)func_0207ac88(b, (uint8_t *)c + 0x14, (void *)func_02079fe0, 0, 0);
    if (r4 == 0) {
        return 0;
    }
    r4[3] = 0;
    r4[4] = a;
    r4[2] = 0;
    r0 = func_0207abbc((uint8_t *)r4 + 0x14, c);
    if (r0 == 0) {
        return 0;
    }
    r4[2] = r0;
    func_02077aa4(data_0213e6a4 + a * 0x24 + 0xc, r4);
    return 1;
}
