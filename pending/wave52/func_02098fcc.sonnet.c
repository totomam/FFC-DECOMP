/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02093b7c(void *dst, const void *src, int32_t n);
extern "C" int32_t func_02098fcc(void *self, uint16_t *src, int32_t n);
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual int32_t ov(int32_t c);
    uint32_t pad[4];
    uint16_t *cur;
    uint16_t *end;
};
extern "C" int32_t func_02098fcc(void *self, uint16_t *src, int32_t n)
{
    Obj *p = (Obj *)self;
    int32_t avail = ((int32_t)p->end - (int32_t)p->cur) / 2;
    int32_t *pm = (avail < n) ? &avail : &n;
    int32_t c = *pm;
    uint16_t **pc;
    int32_t res;
    if (c > 0) {
        func_02093b7c(p->cur, src, c);
        src += c;
        p->cur += c;
        n -= c;
    }
    if (n > 0) {
        pc = &p->cur;
        do {
            uint16_t v = *src;
            src++;
            if (p->cur < p->end) {
                uint16_t *old = p->cur;
                *pc = *pc + 1;
                *old = v;
                res = *old;
            } else {
                res = p->ov(v);
            }
            if (res == 0xffff) break;
            c++;
            n--;
        } while (n > 0);
    }
    return c;
}
