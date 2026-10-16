#include "ffc/types.h"
static inline int sc(uint8_t c, uint8_t n) { return (c * n) / 128; }
void func_02006fe4(uint8_t *p, uint32_t v)
{
    if (v > 0x7f) v = 0x7f;
    if (p[0x12] != 0) {
        if (v == 0) {
            v = 0;
        } else {
            uint8_t c = p[0xc];
            uint8_t n = v + 1;
            v = sc(c, n);
        }
    }
    p[0xc] = v;
    p[0x12] = 1;
}
