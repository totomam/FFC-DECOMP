#include "ffc/types.h"

extern void func_02084160(void *p);

void func_02083bf4(void *p) {
    uint32_t *s = (uint32_t *)p;
    s = (uint32_t *)((uint8_t *)s + 0x14);
    uint32_t a = s[6];
    uint32_t b;
    s[6] = 0;
    b = s[14];
    s[14] = 0;
    func_02084160(p);
    s[6] = a;
    s[14] = b;
}
