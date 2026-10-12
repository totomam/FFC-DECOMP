/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" int func_0200c874(uint8_t *self);
struct G { uint32_t a, b; G(uint32_t x) : a(x), b(0) {} ~G() {} };
inline int isz(const G &g) { return g.a == 0; }
int func_0200c874(uint8_t *self) {
    uint8_t *obj = *(uint8_t **)(self + 0x98);
    uint8_t flag = obj[0x12];
    uint8_t *p = obj + 0x1c;
    if (flag != 0) func_0208763c(p);
    int r5 = isz(G(*(uint32_t *)(obj + 0x14)));
    if (flag != 0) func_02087678(p);
    int ret = 1;
    if (r5) ret = 0;
    return ret;
}
