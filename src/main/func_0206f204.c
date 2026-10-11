#include "ffc/types.h"

extern void func_02090398(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_0206f204(uint32_t *s, uint32_t a, uint32_t b) {
    if (a != b) {
        func_02090398(a, b, s[0] + s[1] - b);
        s[1] = s[1] - (b - a);
    }
    return a;
}
