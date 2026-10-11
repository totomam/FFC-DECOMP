/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02056bf4(void *p);
struct O { virtual void f0(); virtual void f1(); };
inline void rel(O *p) { if (p != 0) p->f1(); }
extern "C" void func_ov002_0219c874(uint8_t *a, O *b)
{
    func_02056bf4(a + 0x48);
    if (b != 0) rel(b);
}
