#include "ffc/types.h"

extern void *func_ov000_02163350(void);

void func_ov000_021625a0(uint32_t a, uint16_t b)
{
    uint8_t *p = (uint8_t *)func_ov000_02163350();
    *(uint32_t *)(p + 0x5d8) = a;
    p = (uint8_t *)func_ov000_02163350();
    *(uint16_t *)(p + 0x5d4) = b;
}
