/* cflags: -lang c++ */
#include "ffc/types.h"

struct S { uint32_t a, b, c, d; };

struct Obj {
    virtual void v0(void);
    virtual void v1(void);
    virtual void v2(void);
    virtual void v3(void);
    virtual void v4(void);
    virtual void v5(void);
    virtual void v6(void);
    virtual void v7(void);
    virtual void v8(void);
    virtual void v9(void);
    virtual void v10(void);
    virtual void v11(void);
    virtual void v12(void);
    virtual void v13(void);
    virtual void v14(void);
    virtual void v15(void);
    virtual void v16(void);
    virtual int m(S s, int x);
};

extern "C" int func_02066974(Obj *obj, S s) {
    return obj->m(s, 0);
}
