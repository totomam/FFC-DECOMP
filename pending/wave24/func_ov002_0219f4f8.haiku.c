#include "ffc/types.h"

int func_ov002_0219f4f8(uint8_t *p)
{
    int i;
    for (i = 0; i < 2; i++) {
        if (p[0x138 + i]) {
            return 1;
        }
    }
    return 0;
}
