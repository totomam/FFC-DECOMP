/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void *func_02056aec(void *obj);
extern "C" void func_02056bc0(void *object, void *node);
struct S { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void f5(); };
extern "C" void func_020778cc(S *self)
{
    self->f5();
    **(uint32_t **)((uint8_t *)self + 0x90) = 1;
    func_02056bc0((uint8_t *)self + 0x14, func_02056aec(self));
}
