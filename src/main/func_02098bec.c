/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02090398(int32_t a, int32_t b, int32_t c);
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual int32_t rd(int32_t a, int32_t b);
    int32_t f1, f2, f3, f4, f5, f6, f7;
};
extern "C" int32_t func_02098bec(Obj *p)
{
    int32_t d = p->f2 - p->f1;
    if (d > 4) {
        func_02090398(p->f1, p->f2 - 4, 4);
        d = 4;
        int32_t x = p->f1;
        p->f1 = x;
        p->f2 = x + 4;
        p->f3 = x + 4;
    }
    int32_t r = p->rd(p->f2, p->f7 - d);
    if (r > 0) {
        int32_t f2 = p->f2;
        int32_t f1 = p->f1;
        int32_t s = f2 + r;
        p->f3 = s;
        p->f1 = f1;
        p->f2 = f2;
        return s - f2;
    }
    return r;
}
