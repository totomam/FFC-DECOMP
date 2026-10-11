#include "ffc/types.h"

extern void func_02068658(void *p);

void func_02034d04(uint8_t *p)
{
    uint32_t i;
    for (i = 0; i < *(uint32_t *)(p + 0xe0); i++) {
        func_02068658(*(void **)(p + 0x8c + i * 4));
    }
}
