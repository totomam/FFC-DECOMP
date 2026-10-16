/* cflags: -lang c++ */
#include "ffc/types.h"
struct X { virtual ~X(); };
extern "C" void func_02056bf4(void *p);
extern "C" void func_ov003_021519b0(void *p, int a);
extern "C" void func_ov003_02151a24(uint8_t *p);
extern "C" void func_ov003_02151a24(uint8_t *p) {
    if (*(int *)(p + 0xa4) == -1) return;
    if (*(int *)(p + 0xac) == -1) return;
    if (*(X **)(p + 0x80) != 0) {
        func_02056bf4(p + 0x48);
        X *o = *(X **)(p + 0x80);
        if (o != 0) {
            delete o;
            *(X **)(p + 0x80) = 0;
        }
    }
    func_ov003_021519b0(p, 0);
}
