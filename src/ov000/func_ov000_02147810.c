#include "ffc/types.h"

extern uint32_t data_02141510[];
extern void func_02084b2c(void *dst, int c, uint32_t n);

void func_ov000_02147810(void)
{
    uint8_t *p = (uint8_t *)data_02141510[1];
    uint8_t *obj = *(uint8_t **)(p + 0xa4);
    if (obj != 0) {
        *(uint8_t **)obj = p;
        obj[8] = 0;
        *(uint32_t *)(obj + 0x50) = 0;
        func_02084b2c(obj + 0x70, 0, 0x30);
        *(uint32_t *)(obj + 0x6c) = 0;
        *(uint32_t *)(obj + 0x44) = 0;
        obj[0x33] = 0;
    }
}
