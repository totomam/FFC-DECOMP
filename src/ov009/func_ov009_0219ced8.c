#include "ffc/types.h"

uint32_t func_ov009_0219ced8(uint8_t *a, uint32_t b)
{
    if (b == 3) {
        int32_t s = *(int32_t *)(a + 0x1F8);
        if ((uint32_t)(s - 1) <= 1) {
            return 7;
        }
        if (a[0x1FC] == 0 && a[0x1ED] != 0) {
            switch (*(int32_t *)(a + 0x1F0)) {
            case 1:
                return 5;
            case 2:
                return 6;
            case 4:
                return 7;
            default:
                return 3;
            }
        }
    }
    return (uint8_t)b;
}
