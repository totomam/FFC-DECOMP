#include "ffc/types.h"

extern void func_02088f30(void);

void func_0208481c(uint32_t a, uint32_t b)
{
    uint32_t t8 = 0x08000000u;
    uint32_t c10 = 0x10000000u;
    uint32_t c20 = 0x20000000u;
    uint32_t c18 = 0x18000000u;
    uint32_t c28 = 0x28000000u;
    uint32_t c30 = 0x30000000u;
    uint32_t c38 = 0x38000000u;
    int i;
    for (i = 0; i < 3; i++) {
        uint32_t f;
        uint32_t t;
        if (i == (int)a) {
            continue;
        }
        f = *(uint32_t *)(0x40000b8 + i * 12);
        if (!(f & 0x80000000u)) {
            continue;
        }
        t = f & c38;
        if (t == b) {
            continue;
        }
        if (t == t8 && b == c10) {
            continue;
        }
        if (t == c10 && b == t8) {
            continue;
        }
        if (t == c18 || t == c20 || t == c28 || t == c30 || t == c38 || t == t8 || t == c10) {
            func_02088f30();
        }
    }
}
