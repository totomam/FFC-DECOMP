#include "ffc/types.h"

extern int32_t func_02078de4(void *p0, void *p1, int32_t a, int32_t b, int32_t c, int32_t d);

typedef struct Obj { void *a0; int32_t (*cb)(int32_t *); } Obj;
typedef struct P { void *x0; Obj *obj; int32_t w8; } P;
typedef struct Arg { int32_t v; int32_t *out; int8_t m8; int8_t m9; } Arg;

void func_02079260(P *p, int32_t a, int32_t b, int32_t c, Arg arg) {
    int32_t t;
    int32_t r;
    int32_t m9;
    int32_t w8;
    int32_t (*fn)(int32_t *);
    Obj *obj;
    obj = p->obj;
    m9 = arg.m9;
    w8 = p->w8;
    t = arg.v;
    fn = obj->cb;
    r = fn(&t);
    if (r != 0) {
        while (r != 10) {
            int32_t y = w8 + func_02078de4(p->x0, obj, a, b, c, r);
            a += y * arg.m8;
            b += y * m9;
            r = fn(&t);
            if (r == 0) {
                break;
            }
        }
    }
    if (arg.out != 0) {
        if (r == 10) {
            *arg.out = t;
        } else {
            *arg.out = 0;
        }
    }
}
