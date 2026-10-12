#include "ffc/types.h"

extern uint32_t func_ov004_0214f740(uint8_t *self);
extern void func_ov004_0214ecac(uint8_t *self, uint32_t x, int32_t *a, int32_t *b);
extern void func_ov004_0214ef54(int32_t *out, uint8_t *self, uint32_t r, uint8_t *p, uint8_t *q, uint32_t x, int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern uint32_t func_ov004_0214f74c(uint8_t *self, uint32_t x);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t data_ov004_02159448[];

void func_ov004_0214ee84(uint8_t *self, uint32_t x, int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, uint8_t flag)
{
    int32_t t[7];
    uint32_t r6;
    uint32_t r7;
    int32_t v;
    uint32_t cond;

    if (self[0xf4] == 0) {
    r6 = func_ov004_0214f740(self);
    a = r6 ? (int32_t)(*(uint32_t *)(self + 0xfc) - 1) - a : a;
    if (!flag) {
        func_ov004_0214ecac(self, x, &a, &b);
    }
    func_ov004_0214ef54(&t[6], self, r6, self + 0xa0, self + 0x98, x, a, b, c, d, e);
    v = t[6];
    cond = (self[0xf5] != 0 && v != 0);
    if (cond != 0) {
        r7 = func_ov004_0214f74c(self, x);
        r6 = func_020817c8(v, data_ov004_02159448[4]);
        func_ov004_0214ef54(&t[4], self, r7, self + 0x98, self + 0xa0, x, a, b, r6, d, e);
    }
}
}
