#include "ffc/types.h"

extern int func_ov000_0214ecc8(void);
extern int func_ov000_0214f30c(void *a, void *b);

int func_ov000_0214f2a8(uint8_t *p1, uint8_t *p2)
{
    int r1;
    int r2;

    if (func_ov000_0214ecc8() != 0) {
        return ~0x1b;
    }
    r1 = 1;
    if (*(int8_t *)(p1 + 0xaf) != 0) {
        if (*(int8_t *)(p1 + 0xaf) != 4) {
            r1 = 0;
        }
    }
    if (r1 == 0) {
        return ~0x1b;
    }
    r2 = 0;
    if (p1 != 0 && (*(int16_t *)(p1 + 0xac) & 1)) {
        r2 = 1;
    }
    if (r2 == 0) {
        return ~0x26;
    }
    if (*(int16_t *)(p1 + 0xac) & 2) {
        return 2 - 0x1e;
    }
    return func_ov000_0214f30c(p1, p2);
}
