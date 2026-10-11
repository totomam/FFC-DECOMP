#include "ffc/types.h"

extern void func_02088f30(void);

void func_0204f68c(uint8_t *p, uint32_t i)
{
    uint8_t *f = p + 0x28;
    if (f[i] == 0) {
        func_02088f30();
    }
    f[i] = 0;
    *(uint8_t *)(p + 0x34 + (i << 2)) = 0;
}
