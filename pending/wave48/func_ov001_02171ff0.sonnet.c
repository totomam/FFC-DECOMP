#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void);
extern int32_t func_ov001_0217307c(uint8_t *a, uint8_t *b, uint8_t *c, int32_t *d);
extern int32_t func_ov000_021654e8(int32_t a, uint8_t *b, int32_t c, int32_t d);
extern int32_t func_ov000_021655a0(int32_t a);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, int32_t *d, int32_t e);
extern int32_t data_ov001_0218f340[];
extern int32_t data_ov001_0218f3a0[];

int32_t func_ov001_02171ff0(uint8_t *self, uint8_t *buf, int32_t *pn) {
    int32_t *w = (int32_t *)self;
    int32_t n = *pn - 1;
    int32_t local;
    int32_t v;
    int32_t one = 1, five = 5;
    if (w[0x57]) {
        uint32_t t = func_ov000_0216591c();
        if (t < (uint32_t)(w[0x58] + data_ov001_0218f340[0])) return 1;
        w[0x58] = (int32_t)t;
        if (n >= data_ov001_0218f340[1]) n = data_ov001_0218f340[1];
    }
    if (w[0x66] && w[0x69] == 1 && w[0x6b] == 1) {
        local = n;
        v = func_ov001_0217307c(self, self + 0x194, buf, &local);
        if (v == 1) {
            if (local == -1) return 1;
            v = local;
            goto L00fc;
        }
        w[0x49] = 1;
        w[0x10] = 5;
        w[0x15] = 0;
        w[0x56] = 1;
        return 3;
    }
    v = func_ov000_021654e8(w[0x14], buf, n, 0);
    if (v != -1) goto L00fc;
    v = func_ov000_021655a0(w[0x14]);
    if (v == -0x38) { w[0x56] = 1; return 2; }
    if (v == -6 || v == -0x1a || v == -0x4c) return 1;
    {
        w[0x49] = one;
        w[0x10] = five;
        w[0x15] = v;
        w[0x56] = one;
    }
    return 3;
L00fc:
    if (v == 0) { w[0x56] = 1; return 2; }
    buf[v] = 0;
    *pn = v;
    func_ov000_021652a8(8, 0, 0x20, data_ov001_0218f3a0, v);
    return 0;
}
