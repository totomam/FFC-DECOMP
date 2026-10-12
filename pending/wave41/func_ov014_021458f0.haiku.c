/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct Obj {
    void **vtbl;
    uint32_t a;
    uint32_t b;
} Obj;

extern void *func_ov014_02146b68(uint32_t size);
extern int func_ov014_02146b80(void *obj, void *arg);
extern void *func_ov014_02145b54(uint32_t size);
extern void *func_ov014_02145b6c(void *p);
extern int func_ov014_021458c0(void *p, void *obj, void *arg);
extern void func_ov014_02145b9c(void *p);
extern void func_ov014_02145b60(void *p);
extern void *data_ov014_02155a38[];

void *func_ov014_021458f0(void *p0, void *p1)
{
    Obj *o;
    void *r5;

    o = (Obj *)func_ov014_02146b68(0x14);
    if (o != 0) {
        o->a = 0;
        o->b = 0;
        o->vtbl = data_ov014_02155a38;
    }
    if (o == 0) {
        return 0;
    }
    if (func_ov014_02146b80(o, p0) == 0) {
        if (o != 0) {
            ((void (*)(Obj *))o->vtbl[1])(o);
        }
        return 0;
    }
    r5 = func_ov014_02145b54(0xd8);
    if (r5 != 0) {
        r5 = func_ov014_02145b6c(r5);
    }
    if (func_ov014_021458c0(r5, o, p1) == 0) {
        if (r5 != 0) {
            func_ov014_02145b9c(r5);
            func_ov014_02145b60(r5);
        }
        return 0;
    }
    return r5;
}
