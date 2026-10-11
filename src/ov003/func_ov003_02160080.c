#include "ffc/types.h"

extern void func_ov003_02160414(uint32_t a, uint32_t b, uint32_t c);

void func_ov003_02160080(uint8_t *p) {
    if (p[0x2c] == 0) {
        func_ov003_02160414(*(uint32_t *)(p + 0x28), 0, 1);
        p[0x2c] = 1;
    }
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
