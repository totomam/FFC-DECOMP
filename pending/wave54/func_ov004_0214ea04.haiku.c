#include "ffc/types.h"

extern int32_t func_ov004_0214f740(uint8_t *a, int32_t b);
extern void func_ov004_0214ecac(uint8_t *a, int32_t b, int32_t *v, int32_t *w);
extern int32_t func_ov004_0214f74c(uint8_t *a, int32_t b);
extern int32_t func_01fff010(uint32_t h, int32_t v, int32_t w);
extern uint32_t func_01ffeff4(uint32_t h);
extern int32_t func_01fff09c(uint32_t h, int32_t v, int32_t w);
extern int32_t func_01ffae0c(uint32_t h, int32_t r, int32_t f);

int func_ov004_0214ea04(uint8_t *a, int32_t b, int32_t c, int32_t d, uint8_t flag)
{
    int32_t i;
    int32_t r;
    uint32_t h;

#define TAB(off) (*(uint32_t *)(a + (off) + i))

    i = func_ov004_0214f740(a, b);
    c = (i == 0) ? c : (*(int32_t *)(a + 0xfc) - 1 - c);
    if (flag == 0) {
        func_ov004_0214ecac(a, b, &c, &d);
    }
    i = i * 4;
    if (func_01fff010(TAB(0xa0), c, d) == 0) {
        h = func_01ffeff4(TAB(0xa0));
        r = func_01fff09c(TAB(0xa0), c, d);
        return (int16_t)(func_01ffae0c(h, r, 0) + 3);
    }
    if (func_01fff010(TAB(0x98), c, d) == 0) {
        h = func_01ffeff4(TAB(0x98));
        r = func_01fff09c(TAB(0x98), c, d);
        return (int16_t)func_01ffae0c(h, r, 0);
    }
    if (a[0xf5] == 0) {
        return 0;
    }
    if (func_01fff010(TAB(0x98), c, d) == 0) {
        h = func_01ffeff4(TAB(0x98));
        r = func_01fff09c(TAB(0x98), c, d);
        return (int16_t)func_01ffae0c(h, r, 1);
    }
    i = func_ov004_0214f74c(a, b);
    i = i * 4;
    if (func_01fff010(TAB(0x98), c, d) == 0) {
        h = func_01ffeff4(TAB(0x98));
        r = func_01fff09c(TAB(0x98), c, d);
        return (int16_t)(-func_01ffae0c(h, r, 1));
    }
    if (func_01fff010(TAB(0xa0), c, d) == 0) {
        h = func_01ffeff4(TAB(0xa0));
        r = func_01fff09c(TAB(0xa0), c, d);
        return (int16_t)(-(func_01ffae0c(h, r, 1) + 3));
    }
    return -6;
#undef TAB
}
