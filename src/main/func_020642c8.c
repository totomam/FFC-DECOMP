#include "ffc/types.h"
extern void func_0205ffd0(uint32_t a, uint32_t b);
void func_020642c8(uint8_t *p, int i)
{
    uint32_t v = (*(uint32_t **)(p + 0x74))[i];
    if (v != 0) {
        func_0205ffd0(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(p + 0x14) + 0x18) + 0x18), v);
        (*(uint32_t **)(p + 0x74))[i] = 0;
    }
}
