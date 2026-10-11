#include "ffc/types.h"

extern void func_0205f470(uint32_t v);

void func_ov003_0214f5e0(uint8_t *p)
{
    uint32_t i;
    for (i = 0; i < 5; i++) {
        uint8_t *q = ((uint8_t **)(p + 0x80))[i];
        if (q != 0) {
            uint8_t *r = *(uint8_t **)(q + 0x50);
            func_0205f470(*(uint32_t *)(r + 0x94));
        }
    }
}
