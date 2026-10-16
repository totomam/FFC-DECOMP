#include "ffc/types.h"
extern void func_020694ac(void *p, int a, int b);
extern char data_ov008_021a90e0[];
void *func_ov008_021a5e80(uint8_t *p, uint32_t a, uint8_t b) {
    uint32_t z = 0;
    uint32_t *q;
    func_020694ac(p, 0, 0);
    *(void **)p = data_ov008_021a90e0;
    q = (uint32_t *)(p + 0xc4);
    *(uint32_t *)(p + 0xc4) = z;
    *(uint32_t *)(p + 0xf0) = z;
    *(uint32_t *)(p + 0xf4) = z;
    q[1] = z;
    q[2] = z;
    q = (uint32_t *)(p + 0xf4);
    q[1] = z;
    q[2] = z;
    p[0x101] = z;
    p[0x102] = z;
    p[0x103] = b;
    *(uint32_t *)(p + 0x108) = a;
    p[0x10c] = z;
    *(uint32_t *)(p + 0x110) = z;
    return p;
}
