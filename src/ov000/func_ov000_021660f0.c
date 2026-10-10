#include "ffc/types.h"

extern void func_ov001_02173470(void *p);

uint32_t func_ov000_021660f0(void *p)
{
    uint8_t *b = (uint8_t *)p;
    if (*(uint32_t *)(b + 0x30) != 0) {
        return 4;
    }
    func_ov001_02173470(*(void **)(b + 0x28));
    return 1;
}
