/* cflags: -lang c++ */
#include "ffc/types.h"
struct S {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual int v8();
    int a; uint8_t *p;
};
extern "C" int func_02099100(S *s) {
    int r = s->v8();
    int c = -1;
    if (r != c) { uint8_t *q = s->p; s->p = q + 1; c = *q; }
    return c;
}
