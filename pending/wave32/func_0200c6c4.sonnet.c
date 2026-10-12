/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
struct Guard {
    uint8_t f; void *p;
    Guard(uint8_t *q) : f(q[0x12]), p(q + 0x1c) { if (f) func_0208763c(p); }
    ~Guard() { if (f) func_02087678(p); }
};
int func_0200c6c4(uint8_t *a);
int func_0200c6c4(uint8_t *a) {
    int r = 1;
    if ((int8_t)*(uint32_t *)(*(uint8_t **)(a + 0x94) + 0xc) != 1) r = 0;
    if (r) {
        uint8_t *q = *(uint8_t **)(a + 0x98);
        Guard g(q);
        r = (*(uint32_t *)(q + 0x14) == 0);
    }
    return r;
}
}
