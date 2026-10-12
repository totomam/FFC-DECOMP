#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } S12;
typedef struct { uint32_t a, b, c, d; } S16;
typedef struct { S16 x; int32_t p; int32_t q; } S24;

extern void func_ov005_02195db0(void *obj, int v);
extern int func_020628ac(void *obj, S12 s);
extern void func_02056c4c(void *obj);
extern uint32_t func_ov005_02195e2c(void *obj, S12 s);
extern void func_02056bc0(void *obj, uint32_t r);

void func_ov007_021ba5d4(void **self, void *p) {
    S16 t1;
    S16 t3;
    volatile S24 t2;
    void **obj;
    void **vt;

    if (p == 0) {
        obj = (void **)self[0x4f];
        vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);
        return;
    }
    vt = *(void ***)p;
    ((void (*)(S16 *, void *))vt[4])(&t1, p);
    func_ov005_02195db0(self[0x4f], 1);
    obj = (void **)self[0x4f];
    vt = *(void ***)obj;
    if (((int (*)(void *))vt[12])(obj)) {
        S12 s;
        s.a = t1.a; s.b = t1.b; s.c = t1.c;
        func_020628ac(self[0x4f], s);
    } else {
        S12 s;
        func_02056c4c(self[0x4e]);
        obj = (void **)self[0x4f];
        vt = *(void ***)obj;
        ((void (*)(S16 *, void *))vt[7])(&t3, obj);
        t2.x = t1;
        t2.p = 10;
        t2.q = -5;
        s.a = t3.a; s.b = t3.b; s.c = t3.c;
        {
            uint32_t r = func_ov005_02195e2c(self[0x4f], s);
            func_02056bc0(self[0x4e], r);
        }
    }
    obj = (void **)self[0x4f];
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
}
