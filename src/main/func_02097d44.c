/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual int rd(uint32_t a, uint32_t n);
    uint32_t pad[8];
    uint32_t cur;
    uint32_t end;
};

extern "C" int func_02097d44(Obj *p);
extern "C" int func_02097d44(Obj *p) {
    while (p->cur < p->end) {
        int n = p->rd(p->cur, p->end - p->cur);
        if (n <= 0) return -1;
        p->cur += n;
    }
    return 0;
}
