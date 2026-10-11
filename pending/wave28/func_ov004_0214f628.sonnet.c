#include "ffc/types.h"

extern void func_ov004_0214f66c(void *a, void *b, uint32_t c);
extern void *func_02081210(void *object, uint32_t size);

void func_ov004_0214f628(void **out, uint8_t *p) {
    uint32_t t[8];
    uint32_t a, b;
    uint32_t size = 2;

    size <<= 12;
    if (p[0xf5] == 0) {
        func_ov004_0214f66c(out, p, 0);
        return;
    }
    func_ov004_0214f66c(&t[5], p, 1);
    a = t[5];
    func_ov004_0214f66c(&t[6], p, 0);
    b = t[6];
    *out = func_02081210((void *)(b + a), size);
}
