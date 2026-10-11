#include "ffc/types.h"

void func_ov001_0218b544(uint8_t *p) {
    uint32_t *o = *(uint32_t **)(p + 0x734);
    if (o != 0) {
        uint32_t v = o[3];
        v &= ~0xffu;
        v |= 2;
        o[3] = v;
        *(uint32_t **)(p + 0x734) = 0;
    }
}
