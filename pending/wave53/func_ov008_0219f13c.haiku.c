#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *obj, void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void *data_020b8e44;
extern void *func_020159c8(void *heap, uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *obj, int32_t n, void *arg);
extern void func_020059cc(void *obj);
extern void *func_02062a30(void *owner);
extern void *func_ov008_0219f210(void *self, uint32_t a, uint32_t b);
extern void func_02056bc0(void *obj, void *node);
extern uint32_t data_ov008_021a82b4[2];
extern uint32_t data_ov008_021a84f4[2];

typedef void (*vfn_t)(void *);

void func_ov008_0219f13c(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t t1[3];
    uint32_t t2[3];
    uint32_t *dp;
    void *r4;
    void *r7;
    void *o;

    if (*(uint32_t *)(s + 0xec) == 0xffffffffu) {
        return;
    }
    {
        void *obj = *(void **)(s + 0xe0);
        void **vt = *(void ***)obj;
        ((vfn_t)vt[11])(obj);
    }
    *(uint32_t *)(s + 0xf0) = 0;
    r4 = func_0205681c(0x118);
    if (r4 != 0) {
        dp = data_ov008_021a82b4;
        r4 = func_02031624(r4, s + 0xf0, dp[0], dp[1], 0, 0, 0);
    }
    func_02005988(t1, func_020159c8(data_020b8e44, 0xd8));
    func_02031754(r4, 1, t1);
    func_020059cc(t1);
    func_02005988(t2, func_020159c8(data_020b8e44, 0xd9));
    func_02031754(r4, -2, t2);
    func_020059cc(t2);
    o = func_02062a30(*(void **)(s + 0xe0));
    dp = data_ov008_021a84f4;
    r7 = func_ov008_0219f210(self, dp[0], dp[1]);
    {
        uint8_t *q = s + 0x14;
        func_02056bc0(q, r4);
        func_02056bc0(q, r7);
        func_02056bc0(q, o);
    }
}
