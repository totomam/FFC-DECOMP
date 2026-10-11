#include "ffc/types.h"

extern int32_t func_020212e8(uint32_t *p);

void func_020216bc(uint32_t *p) {
    if (func_020212e8(p)) {
        p[3] = (p[3] & ~0xffu) | 2u;
    }
}
