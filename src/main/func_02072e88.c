#include "ffc/types.h"

extern void func_ov000_0215b37c(void);

void func_02072e88(uint8_t *p)
{
    uint8_t *o = *(uint8_t **)(p + 0x14);
    if (o[0x24] != 0) {
        return;
    }
    if (o[0x23] != 0) {
        return;
    }
    if (o[0x21] != 0) {
        func_ov000_0215b37c();
        o = *(uint8_t **)(p + 0x14);
        o[0x21] = 0;
    }
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
}
