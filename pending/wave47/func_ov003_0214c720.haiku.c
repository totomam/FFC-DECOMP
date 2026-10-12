#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

extern void *func_0203b688(void);
extern void func_ov003_021565a0(void *p);
extern void *func_0203b75c(uint32_t n);
extern void *func_ov003_0215b3c8(void *obj, uint32_t p, uint32_t z0, uint32_t m, uint32_t z1, uint32_t z2, uint32_t z3);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_0215b0c8(uint32_t *out, void *obj);
extern void *func_ov003_02155b40(void *obj);
extern void *func_ov003_0214c118(void *self, uint32_t w1, uint32_t w2, S ss, uint32_t out, uint16_t h, uint32_t k);
extern void *func_02021610(uint32_t v, uint32_t zero);
extern void *func_ov003_021462d8(void *self, uint32_t w1, uint32_t w2);
extern void *func_ov003_0215b1d4(void *obj);
extern uint32_t data_ov003_0217997c[2];
extern uint32_t data_ov003_02179984[2];

void *func_ov003_0214c720(void *a, void *b, S s, uint8_t f, uint32_t p6, uint32_t p7)
{
    void *r4;
    void *r6;
    void *tmp;
    uint32_t *dp;

    r4 = func_0203b688();
    func_ov003_021565a0(b);
    r6 = func_0203b75c(15);
    tmp = func_ov003_0215b3c8(b, p6, 0, 0x1000, 0, 0, 0);
    func_02056bc0(r4, tmp);
    func_02056bc0(r4, r6);
    if (f == 0) {
        uint32_t out[2];
        void *q;
        uint16_t h;
        func_ov003_0215b0c8(out, b);
        q = func_ov003_02155b40(b);
        h = *(uint16_t *)((uint8_t *)q + 0x10);
        dp = data_ov003_0217997c;
        tmp = func_ov003_0214c118(a, dp[0], dp[1], s, out[0], h, 0x15);
        func_02056bc0(r4, tmp);
    }
    if (f == 0) {
        tmp = func_02021610(p7, 0);
        func_02056bc0(r4, tmp);
    }
    dp = data_ov003_02179984;
    r6 = func_ov003_021462d8(a, dp[0], dp[1]);
    tmp = func_ov003_0215b1d4(b);
    func_02056bc0(r4, tmp);
    func_02056bc0(r4, r6);
    return r4;
}
