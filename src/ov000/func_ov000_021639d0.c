#include "ffc/types.h"

extern void *func_ov000_02163350(void *p);

uint32_t func_ov000_021639d0(void *p)
{
    return *(uint32_t *)((uint8_t *)func_ov000_02163350(p) + 0x7b0);
}
