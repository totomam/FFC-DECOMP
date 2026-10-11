/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { virtual void a(); virtual void b(); };
struct N { int v, w; N(int x):v(x),w(x){} ~N(){} };
inline int df(const N &a, int b){ return a.v - b; }
extern "C" {
void func_0208763c(void *p);
void func_02087678(void *p);
void func_0204f218(void *p, int x);
void func_02059b2c(uint8_t *self, Obj *obj);
}
void func_02059b2c(uint8_t *self, Obj *obj) {
    uint8_t *p = *(uint8_t **)(self + 0x10) + 0x20;
    func_0208763c(p);
    *(uint32_t *)(self + 0x14) = df(N(0), 0);
    func_02087678(p);
    if (obj != 0) { obj->b(); }
    func_0204f218(*(void **)(self + 0xc), 0);
}
