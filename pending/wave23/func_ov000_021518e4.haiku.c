#include "ffc/types.h"

extern int func_ov000_021518c8(void *p);

int func_ov000_021518e4(uint8_t *p)
{
    if ((p[0x66] & 2) && func_ov000_021518c8(p + 0x20) && p[0x65] <= 3) {
        return 1;
    }
    return 0;
}
