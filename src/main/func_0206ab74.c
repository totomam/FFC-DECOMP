/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); uint32_t p4,p8,pc,p10,f14; };
extern "C" {
extern void *data_0213e098;
extern uint32_t data_0213df20;
extern void func_02055070(void *);
extern void func_0205509c(void *);
void func_0206ab74(Obj *a);
}
void func_0206ab74(Obj *a) {
    func_02055070(data_0213e098);
    data_0213df20 = a->f14;
    a->v3();
    a->pc = (a->pc & ~0xffu) | 2;
    func_0205509c(data_0213e098);
}
