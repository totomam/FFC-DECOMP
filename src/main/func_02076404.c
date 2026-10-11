#include "ffc/types.h"

extern void func_02075ad0(uint32_t a, uint32_t *b, uint32_t *c);

uint32_t func_02076404(uint8_t *p) {
    uint32_t x;
    uint32_t y;
    uint32_t v = *(uint32_t *)(p + 0x88);
    if (v == 0) {
        return 0;
    }
    func_02075ad0(v, &x, &y);
    return x;
}
