/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02056bf4(void *p);
struct X { virtual ~X(); };
struct S { uint8_t pad[0x1b0]; X *o; uint8_t pad2[0x24]; uint32_t f; };
extern "C" void func_ov003_021464b4(S *p);
void func_ov003_021464b4(S *p) {
    if (p->o != 0 && p->f == 0) {
        func_02056bf4((uint8_t*)p + 0x48);
        if (p->o != 0) {
            delete p->o;
            p->o = 0;
        }
    }
}
