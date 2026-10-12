/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02093b7c(void *dst, const void *src, int n);
extern "C" int func_02098f20(struct S *p, uint16_t *dst, int n);

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual int v9();
    uint32_t pad;
    uint8_t *cur;
    uint8_t *end;
};

extern "C" int func_02098f20(S *p, uint16_t *dst, int n) {
    int half = (p->end - p->cur) / 2;
    int k;
    int ret;

    k = *(half < n ? &half : &n);
    ret = k;

    if (k > 0) {
        func_02093b7c(dst, p->cur, k);
        dst += k;
        p->cur += k * 2;
        n -= k;
    }

    while (n > 0) {
        int v;
        uint8_t *c = p->cur;
        uint8_t *e = p->end;
        if (c < e) {
            p->cur = p->cur + 2;
            v = *(uint16_t *)c;
        } else {
            v = p->v9();
        }
        if (v == 0xffff) {
            break;
        }
        *dst++ = (uint16_t)v;
        n--;
        ret++;
    }

    return ret;
}
