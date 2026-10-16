/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
struct G { void *p; uint8_t f; G(void *q, uint8_t ff) : p(q), f(ff) { if (f) func_0208763c(p); } ~G() { if (f) func_02087678(p); } };
struct B { uint8_t pad[0x12]; uint8_t f; uint8_t pad2; uint32_t v; uint8_t pad3[4]; uint8_t lock[4]; };
struct X { uint8_t pad[0x14]; B b; };
inline bool empty(B *b) { G g(b->lock, b->f); return b->v == 0; }
extern "C" bool func_ov007_021a03d0(uint8_t *obj)
{
    X *x = (X*)(obj + 0xc);
    B *b = &x->b;
    return empty(b);
}
