/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
struct E { int a, b; ~E() {} };
extern "C" int func_02057db4(uint8_t *self);
extern "C" int func_02057db4(uint8_t *self) {
    uint8_t *q = self + 0x20;
    E e; *(volatile int*)&e.b;
    func_0208763c(q);
    int r = *(uint32_t *)(self + 0x14) == 0;
    func_02087678(q);
    return r;
}
