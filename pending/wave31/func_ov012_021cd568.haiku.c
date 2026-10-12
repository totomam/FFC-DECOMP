#include "ffc/types.h"

extern void func_ov012_021cd77c(void *p);

void func_ov012_021cd568(void *a0, uint32_t a1)
{
    uint8_t *p = (uint8_t *)a0;
    uint8_t i = 0;
    uint32_t *table = *(uint32_t **)(p + 0xc8);

    do {
        if (a1 == table[i]) {
            uint8_t idx = (uint8_t)(p[0x104] * 8 + i);
            if (idx < *(uint32_t *)(p + 0xfc) && p[0x106] != 0) {
                func_ov012_021cd77c(p);
                return;
            }
        }
        i++;
    } while (i < 8);
}
