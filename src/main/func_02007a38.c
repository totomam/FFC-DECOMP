#include "ffc/types.h"

extern void func_02005f6c(void *p);

void *func_02007a38(void *p)
{
    int i;
    uint8_t *base = (uint8_t *)p;

    func_02005f6c(base + 0x48);
    *(uint8_t *)base = 0;
    *(uint32_t *)(base + 4) = 0;
    *(int16_t *)(base + 0x58) = -1;
    for (i = 0; i < 0x10; i++) {
        *(int32_t *)(base + 8 + i * 4) = -1;
    }
    return p;
}
