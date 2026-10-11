#include "ffc/types.h"

extern void func_02021338(void *p);

void func_0200d85c(uint8_t *base, uint32_t idx)
{
    uint32_t i = idx - 1;
    if (i < *(uint32_t *)(base + 0x84)) {
        uint32_t **tbl = *(uint32_t ***)(base + 0x80);
        func_02021338((void *)tbl[i]);
    }
}
