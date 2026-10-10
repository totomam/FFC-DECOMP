#include "ffc/types.h"

extern void *func_0204f080(void *a, void *b);

void func_02059be4(uint8_t *p)
{
    uint16_t *d = (uint16_t *)func_0204f080(*(void **)(p + 0x14), *(void **)(p + 0x18));
    *d = *(uint16_t *)(p + 0x10);
}
