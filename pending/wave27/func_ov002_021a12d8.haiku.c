#include "ffc/types.h"

extern uint32_t func_ov002_02195fac(uint32_t);
extern uint32_t func_ov002_02195fa4(uint32_t);
extern uint32_t func_ov002_02198694(uint32_t);
extern uint32_t func_ov002_021c85f8(void *);
extern uint32_t func_ov002_02198688(uint32_t, uint32_t);

void func_ov002_021a12d8(uint8_t *self, uint32_t v)
{
    uint32_t r5;
    uint32_t r2;

    *(uint32_t *)(self + 0xf4) = v;
    *(uint32_t *)(self + 0xf0) = func_ov002_02195fac(v);
    *(uint32_t *)(self + 0xfc) = func_ov002_02198694(func_ov002_02195fa4(v));
    r5 = func_ov002_02195fa4(v);
    r2 = func_ov002_021c85f8(self + 0x144);
    *(uint32_t *)(self + 0xf8) = func_ov002_02198688(r5, 1 - r2);
}
