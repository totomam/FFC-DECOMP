#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_0205dcdc(void *self, void *a, void *obj, uint32_t c, uint32_t d, uint8_t e);
extern void *func_020059cc(void *object);

void *func_0203bc28(void *a, uint32_t b, uint32_t c, uint32_t d, uint8_t e) {
    uint32_t local[3];
    int flag = 0;
    void *r = func_0205681c(0x6c);
    if (r != 0) {
        func_02005988(local, b);
        flag = 1;
        r = func_0205dcdc(r, a, local, c, d, e);
    }
    if (flag) {
        func_020059cc(local);
    }
    return r;
}
