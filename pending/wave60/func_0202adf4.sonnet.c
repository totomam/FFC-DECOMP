#include "ffc/types.h"
typedef void (*Fn)(void*);
typedef struct S { void *vt; uint8_t pad[0x2c]; uint32_t a; void *o; } S;
extern uint8_t data_020ad9c4[];
extern void func_02022eb8(uint32_t a);
extern void func_0202b18c(void *a);
extern void func_0202d0e0(void *a);
extern void func_0209d02c(void *a, int b, int c, void *d);
extern void func_0202ade8(void);
S *func_0202adf4(S *p) {
    p->vt = data_020ad9c4;
    if (p->o != 0) {
        func_02022eb8(p->a);
        if (p->o != 0) {
            void *o = p->o;
            if (o != 0) (*(Fn**)o)[1](o);
            p->o = 0;
        }
    }
    func_0202b18c(p);
    func_0202d0e0((uint8_t*)p + 0x164);
    func_0209d02c((uint8_t*)p + 0xbc, 14, 12, (void*)func_0202ade8);
    return p;
}
