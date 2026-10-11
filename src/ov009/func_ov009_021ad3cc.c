#include "ffc/types.h"

extern void func_ov009_021ad3f0(void *a, uint32_t b);
extern void func_ov009_021ad528(void *a, uint32_t b);

void func_ov009_021ad3cc(void *a, uint32_t b)
{
    if (b >= 5) {
        return;
    }
    {
        uint8_t s = ((uint8_t *)a)[0x27b];
        if (s == 0) {
            func_ov009_021ad3f0(a, b);
            return;
        }
        if (s == 1) {
            func_ov009_021ad528(a, b);
        }
    }
}
