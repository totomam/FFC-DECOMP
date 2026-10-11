#include "ffc/types.h"

extern void *func_ov002_021aaf80(void *a, uint32_t b);

uint32_t func_ov002_021ad104(void *a, uint8_t c)
{
    uint32_t i;
    uint8_t *z = 0;
    for (i = 0; i < 5; i++) {
        uint8_t *p = (uint8_t *)func_ov002_021aaf80(a, i);
        if (p != 0) {
            int32_t off = *(int32_t *)(p + 0x14);
            uint8_t *q = (off == 0) ? z : (p + off);
            if (c == *q) {
                return 1;
            }
        }
    }
    return 0;
}
