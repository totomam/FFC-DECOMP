/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void *func_02056aec(void *object);
extern "C" void func_02056bc0(void *object, void *node);
struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); uint8_t pad[0x8c]; uint32_t *q; };
extern "C" void func_020778cc(O *p)
{
    p->f5();
    *p->q = 1;
    func_02056bc0((uint8_t *)p + 0x14, func_02056aec(p));
}
