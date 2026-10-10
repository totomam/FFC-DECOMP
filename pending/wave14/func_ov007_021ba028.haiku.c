#include "ffc/types.h"

extern void func_020695d0(void *p);

void *func_ov007_021ba028(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t *dst = *(uint32_t **)(b + 0x130);
    *dst = b[0x144];
    func_020695d0(p);
    return p;
}
