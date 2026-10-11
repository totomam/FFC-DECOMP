#include "ffc/types.h"

extern void func_0205ffd0(void *p);

void func_020642c8(uint8_t *p, int idx) {
    uint32_t *base = *(uint32_t **)(p + 0x74);
    if (base[idx] != 0) {
        uint8_t *o = *(uint8_t **)(p + 0x14);
        o = *(uint8_t **)(o + 0x18);
        o = *(uint8_t **)(o + 0x18);
        func_0205ffd0(o);
        base = *(uint32_t **)(p + 0x74);
        base[idx] = 0;
    }
}
