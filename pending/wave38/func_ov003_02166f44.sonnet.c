#include "ffc/types.h"
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern char data_ov003_0217b034[];
typedef struct Obj { void *vtbl; char pad[0x80]; uint32_t f84, f88, f8c, f90, f94, f98, f9c, fa0; uint8_t fa4; } Obj;
typedef struct S2 { uint32_t a,b; } S2;
typedef struct S3 { uint32_t a,b,c; } S3;
Obj *func_ov003_02166f44(S2 s, S2 t, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint8_t i) {
    Obj *p = (Obj *)func_0205681c(0xa8);
    if (p) {
        func_02056c9c(p, 0);
        p->vtbl = data_ov003_0217b034;
        p->f84 = s.a; p->f88 = s.b; p->f8c = t.a; p->f90 = t.b;
        p->f94 = e; p->f98 = f; p->f9c = g; p->fa0 = h; p->fa4 = i;
    }
    return p;
}
