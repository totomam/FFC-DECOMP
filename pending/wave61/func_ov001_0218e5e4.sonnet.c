/* cflags: -lang c++ -noO4,p -O4 */
#include "ffc/types.h"
struct S { uint32_t a, b; };
struct G { uint8_t pad[0x88]; void *f; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *v5(); virtual void *v6(); };
extern "C" {
extern void *func_ov001_0218de10(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov001_0218e3b4(void *o, int v);
extern void *func_02056aec(void *o);
extern void *func_020763c4(G *o, S s);
extern G **data_020b8e44;
extern S data_ov001_021949ec;
void func_ov001_0218e5e4(O *self);
}
void func_ov001_0218e5e4(O *self) {
    if ((*data_020b8e44)->f != 0) {
        func_02056bc0((uint8_t*)self + 0x14, func_ov001_0218de10());
        func_ov001_0218e3b4(self, 0);
        void *a = func_02056aec(self);
        void *b = func_020763c4(*data_020b8e44, data_ov001_021949ec);
        void *c = self->v6();
        uint8_t *q = (uint8_t*)self + 0x14;
        func_02056bc0(q, c);
        func_02056bc0(q, b);
        func_02056bc0(q, a);
    }
}
