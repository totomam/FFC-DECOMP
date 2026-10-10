#include "ffc/types.h"

extern int8_t *data_ov006_021bc6a8;

void func_ov006_021a3754(uint8_t x)
{
    int8_t *p = data_ov006_021bc6a8;
    if (p[0x16] == -1) {
        p[0x16] = x;
    }
}
