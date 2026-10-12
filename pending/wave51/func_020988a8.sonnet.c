/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02090398(void *a, void *b, int c, int d);

struct Obj {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual int32_t f14(uint8_t *e, int32_t c);
    virtual int64_t f15(int64_t o, int32_t w);
    uint8_t *begin;
    uint8_t *end;
    uint8_t *eos;
    int32_t pad10[3];
    int32_t cap;
};

extern "C" int32_t func_020988a8(Obj *p) {
    int diff = p->end - p->begin;
    int n = diff / 2;
    int m;
    int r6;

    if (n > 4) {
        uint8_t *b;
        n = 4;
        func_02090398(p->begin, p->end - 8, 8, diff);
        b = p->begin;
        p->begin = b;
        p->end = b + 8;
        p->eos = p->end;
    }

    m = p->f14(p->end, (p->cap - n) * 2);
    if (m <= 0) {
        return m;
    }

    r6 = m % 2;
    if (r6 != 0) {
        int64_t t = p->f15(-r6, 1);
        if (t < 0) {
            return -1;
        }
        m -= r6;
    }

    {
        uint8_t *b = p->begin;
        uint8_t *e = p->end;
        *(uint8_t * volatile *)&p->begin = b;
        p->end = e;
        m &= ~1;
        p->eos = e + m;
        return (p->eos - p->end) / 2;
    }
}
