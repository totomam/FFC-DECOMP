/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual int32_t seek(int32_t lo, int32_t hi, int32_t w);
    int32_t a, b, c;
    int32_t pad[(0x34 - 0x10) / 4];
    int32_t d;
};
extern "C" int32_t func_02097acc(Obj *p) {
    int32_t n = ((p->c - p->b) / 2) * p->d;
    int32_t r = n;
    if (n > 0) {
        r = p->seek(-n, (-n) >> 31, 1);
    }
    if (r < 0) return -1;
    int32_t t1 = p->b;
    int32_t t0 = p->a;
    p->b = t1;
    p->a = t0;
    p->c = t1;
    return 0;
}
