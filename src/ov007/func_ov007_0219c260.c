#include "ffc/types.h"

extern void func_ov007_0219c400(uint32_t x);

void func_ov007_0219c260(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x88);
    if (v >= 0x164) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    }
    if (v < 0x152) {
        return;
    }
    {
        uint32_t *f = *(uint32_t **)(p + 0x80);
        uint32_t a = f[1];
        uint32_t b = f[2];
        if (0x1c0b & (a & (b ^ a))) {
            *(uint8_t *)(p + 0x8c) = 1;
        }
    }
    if (*(uint8_t *)(p + 0x8c) != 0) {
        func_ov007_0219c400(*(uint32_t *)(p + 0x84));
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
