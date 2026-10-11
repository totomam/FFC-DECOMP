#include "ffc/types.h"

extern void func_020878e8(void *a, uint32_t b);
extern void func_02087874(void *a, uint32_t b);
extern void func_02084b2c(void *a, int32_t v, uint32_t n);

void func_0207eba8(uint32_t *p) {
    uint8_t *a = (uint8_t *)p[1];
    uint32_t b = p[2];
    uint32_t c = p[3];
    uint32_t d = b + c;
    func_020878e8(a, d);
    func_02087874(a, d);
    func_02084b2c(a + b, 0, d - b);
}
