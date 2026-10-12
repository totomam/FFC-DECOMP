#include "ffc/types.h"

extern void func_ov001_02185754(void *a, void *b, int c, int d);
extern void func_ov001_021856d8(void *p);
extern void func_ov001_021856b8(void *p);

void func_ov001_02185978(uint8_t *a, uint8_t *b, int c, int mode, uint32_t d)
{
    uint8_t *p14 = b + 0x14;
    uint8_t x;
    uint8_t v;

    *p14 &= 0x43;
    *(uint8_t *)(b + 0x28) = 0;
    *(uint32_t *)(b + 0x20) = 0;

    if (mode == 2) {
        return;
    }
    if (mode == 0) {
        v = *p14;
        x = 4;
    } else if (mode == 1) {
        v = *p14;
        x = 8;
    } else if (mode == 2) {
        v = *p14;
        x = 0x20;
    } else {
        return;
    }
    *p14 = (uint8_t)(x | v);

    if (d != 0 && (uint32_t)mode <= 1) {
        b[0x14] |= 0x80;
    }

    {
        int32_t hi = ((int32_t *)a)[4];
        int32_t lo = ((int32_t *)a)[1];
        if (hi < lo) {
            func_ov001_02185754(a, b, c, mode);
            return;
        }
    }
    if (c != 0) {
        func_ov001_021856d8(a + 0x14);
        return;
    }
    func_ov001_021856b8(a + 0x14);
}
