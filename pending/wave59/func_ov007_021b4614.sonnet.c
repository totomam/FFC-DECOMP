#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } S;
typedef void (*Fn)(void*);
typedef void (*FnS)(S*, void*);
extern void func_ov005_02195db0(void *o, int x);
extern void func_020628ac(void *o, S s);
extern void *func_02056c4c(void *o);
extern void *func_ov005_02195e2c(void *o, S a, S b, int c, int d);
extern void func_02056bc0(void *object, void *node);
void func_ov007_021b4614(uint8_t *self, void *obj) {
    void *p;
    S v, w;
    if (obj == 0) {
        p = *(void**)(self + 0xdc);
        (*(Fn**)p)[0x2c/4](p);
        return;
    }
    (*(FnS**)obj)[0x10/4](&v, obj);
    func_ov005_02195db0(*(void**)(self + 0xdc), 1);
    p = *(void**)(self + 0xdc);
    if (((int(*)(void*))(*(Fn**)p)[0x30/4])(p) != 0) {
        func_020628ac(*(void**)(self + 0xdc), v);
    } else {
        void *r;
        func_02056c4c(*(void**)(self + 0xd8));
        p = *(void**)(self + 0xdc);
        (*(FnS**)p)[0x1c/4](&w, p);
        r = func_ov005_02195e2c(*(void**)(self + 0xdc), w, v, 10, -5);
        func_02056bc0(*(void**)(self + 0xd8), r);
    }
    p = *(void**)(self + 0xdc);
    (*(Fn**)p)[0x28/4](p);
}
