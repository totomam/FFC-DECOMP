/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02090380(void *destination, const void *source, uint32_t length);

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
    virtual int underflow();
    uint32_t pad;
    uint8_t *cur;
    uint8_t *end;
};

extern "C" int func_02099080(S *s, uint8_t *dst, int n) {
    int count;
    int avail = (int)s->end - (int)s->cur;
    int *p;
    if (avail < n) {
        p = &avail;
    } else {
        p = &n;
    }
    count = *p;
    if (count > 0) {
        func_02090380(dst, s->cur, count);
        s->cur += count;
        dst += count;
        n -= count;
    }
    while (n > 0) {
        int c;
        if (s->cur < s->end) {
            c = *s->cur++;
        } else {
            c = s->underflow();
        }
        if (c == -1) {
            break;
        }
        *dst = (uint8_t)c;
        dst++;
        n--;
        count++;
    }
    return count;
}
