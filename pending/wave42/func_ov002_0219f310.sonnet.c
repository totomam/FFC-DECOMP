/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02056bf4(void *obj);
extern void func_02056c4c(void *obj);
extern void func_02056bc0(void *object, void *node);
}
struct D { virtual ~D(); };
struct Obj {
    uint8_t pad0[0xc4];
    void *c4;
    void *c8;
    void *cc;
    uint8_t pad1[0x14];
    D *e4;
    D *e8;
    uint32_t ec;
};
extern "C" void func_ov002_0219f310(Obj *self, D *a, D *b, uint32_t c)
{
    D *t4 = self->e4;
    if (t4 != 0) {
        func_02056bf4(self->cc);
        func_02056c4c(self->c8);
        D *t4 = self->e4;
    if (t4 != 0) { delete self->e4; self->e4 = 0; }
    }
    self->e4 = a;
    func_02056bc0(self->cc, a);
    D *t8 = self->e8;
    if (t8 != 0) {
        func_02056bf4(self->cc);
        func_02056c4c(self->c4);
        D *t8 = self->e8;
    if (t8 != 0) { delete self->e8; self->e8 = 0; }
    }
    self->e8 = b;
    if (b != 0) {
        func_02056bc0(self->cc, b);
        self->ec = c;
    }
}
