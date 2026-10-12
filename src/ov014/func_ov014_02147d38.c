#include "ffc/types.h"

extern char data_ov014_02155aa8[];
extern void func_02056858(void *p);
extern void func_02052d3c(void *p, uint32_t v);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);

typedef struct Obj {
    void *vtbl;
    uint32_t f4;
    void *f8;
    uint32_t fc;
    uint8_t f10;
    void *f14;
    void *f18;
    void *f1c;
} Obj;

void *func_ov014_02147d38(void *self)
{
    Obj *o = (Obj *)self;

    o->vtbl = data_ov014_02155aa8;
    if (o->f14 != 0) {
        func_02056858(o->f14);
        o->f14 = 0;
    }
    if (o->f18 != 0) {
        func_02056858(o->f18);
        o->f18 = 0;
    }
    if (o->f1c != 0) {
        func_02056858(o->f1c);
        o->f1c = 0;
    }
    if (o->f8 != 0) {
        if (o->f10 != 0) {
            func_02052d3c(o->f8, o->fc);
        }
        func_02052c04(o->f8);
    }
    func_02053290(&o->f4);
    return o;
}
