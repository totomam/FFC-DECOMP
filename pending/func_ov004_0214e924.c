#include "ffc/types.h"

extern uint32_t func_ov004_0214f740(uint8_t *self, int a);
extern void func_ov004_0214ecac(uint8_t *self, int a, int *b, int *c);
extern int func_01fff010(uint32_t fn, int b, int c);
extern uint32_t func_ov004_0214f74c(uint8_t *self, int a);

uint32_t func_ov004_0214e924(uint8_t *self, int a, int b, int c, uint8_t flag, int *out)
{
    uint32_t idx = func_ov004_0214f740(self, a);

    int t;
    if (idx == 0) {
        t = b;
    } else {
        t = *(int *)(self + 0xfc) - 1 - b;
    }
    b = t;
    if (flag == 0) {
        func_ov004_0214ecac(self, a, &b, &c);
    }
    if (out != 0) {
        *out = 0;
    }
    if (func_01fff010(((uint32_t *)(self + 0xa0))[idx], b, c) == 0) {
        return ((uint32_t *)(self + 0xa0))[idx];
    }
    if (func_01fff010(((uint32_t *)(self + 0x98))[idx], b, c) == 0) {
        return ((uint32_t *)(self + 0x98))[idx];
    }
    if (self[0xf5] == 0) {
        return 0;
    }
    if (out != 0) {
        *out = 1;
    }
    idx = func_ov004_0214f74c(self, a);
    if (func_01fff010(((uint32_t *)(self + 0x98))[idx], b, c) == 0) {
        return ((uint32_t *)(self + 0x98))[idx];
    }
    if (func_01fff010(((uint32_t *)(self + 0xa0))[idx], b, c) != 0) {
        return 0;
    }
    return ((uint32_t *)(self + 0xa0))[idx];
}
