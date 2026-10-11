#include "ffc/types.h"

extern void func_ov004_0214f66c(void *a, void *b, uint32_t c);
extern void *func_02081210(void *object, uint32_t size);

void func_ov004_0214f628(void **out, uint8_t *p) {
    uint32_t t[8];
    uint32_t size;

    if (p[0xf5] == 0) {
        func_ov004_0214f66c(out, p, 0);
        return;
    }
    size = 2;
    size <<= 12;
    func_ov004_0214f66c(&t[5], p, 1);
    func_ov004_0214f66c(&t[6], p, 0);
    *out = func_02081210((void *)(t[6] + t[5]), size);
}
