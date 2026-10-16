/* cflags: -lang c++ */
#include "ffc/types.h"
struct X { virtual ~X(); };
extern "C" void func_02056bf4(void *p, X *o);
struct S { uint8_t pad[0x414]; X *o; };
extern "C" void func_ov003_0214dde8(S *p);
extern "C" void func_ov003_0214dde8(S *p) {
    if (p->o != 0) {
        func_02056bf4((uint8_t*)p + 0x48, p->o);
        if (p->o != 0) {
            delete p->o;
            p->o = 0;
        }
    }
}
