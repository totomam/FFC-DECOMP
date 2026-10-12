/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *a);
extern "C" void func_02087678(void *a);
struct V { virtual void f0(); virtual void f1(); virtual void f2(); };
struct Guard { void *ptr; volatile uint8_t flag; };
extern "C" void func_0205514c(uint8_t *p) {
    Guard g;
    g.ptr = p + 0x150;
    g.flag = 1;
    if (g.flag != 0) func_0208763c(g.ptr);
    if ((int8_t)*(uint32_t *)(p + 0xf0) == 0) {
        ((V *)(p + 0xe4))->f2();
    }
    if (g.flag) func_02087678(g.ptr);
}
