/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
struct Guard {
    void *m; int pad;
    Guard(void *p) : m(p) { func_0208763c(p); }
    ~Guard() { func_02087678(m); }
};
extern "C" uint32_t func_0202eba4(uint8_t *p) {
    Guard g(p + 0x4b8);
    return *(uint32_t *)(p + 0x4b8 + 0x30);
}
