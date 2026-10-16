/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a, b; };
extern "C" Pair data_020b286c;
extern "C" void func_02056bc0(void *object, void *node);
struct O { virtual void v0(); virtual void v1(); virtual void *v2(void *a, void *b); };
struct T { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *v5(int a);
  uint8_t pad[0x80]; O *o; Pair pr; uint8_t pad2[4]; uint8_t x[1]; };
extern "C" void func_0207697c(T *p) {
    void *r = p->v5(2);
    void *n = p->o->v2(r, p->x);
    func_02056bc0((uint8_t*)p + 0x14, n);
    uint32_t a = data_020b286c.a, b = data_020b286c.b; p->pr.a = a; p->pr.b = b;
}
