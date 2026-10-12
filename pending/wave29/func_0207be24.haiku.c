#include "ffc/types.h"

extern void func_02086dcc(void *a, void *fn, void *b, void *c, uint32_t d, uint32_t e);
extern void func_02077a7c(void *p, uint32_t x);
extern void func_02087620(void *object);
extern void func_020870a0(void *object);
extern void func_0207c894(void);

void func_0207be24(uint8_t *p, uint32_t x)
{
    func_02086dcc(p, func_0207c894, p, p + 0x10c0, 0x1000, x);
    func_02077a7c(p + 0x10e0, 0);
    func_02087620(p + 0x10c8);
    *(uint32_t *)(p + 0x10c4) = 0;
    *(uint32_t *)(p + 0x10c0) = 0;
    func_020870a0(p);
}
