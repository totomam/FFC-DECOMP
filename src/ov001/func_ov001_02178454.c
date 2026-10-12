#include "ffc/types.h"

extern int32_t func_ov000_02168768(int32_t);
extern int32_t func_ov000_021670e8(int32_t, uint16_t);
extern void func_ov000_02166d80(int32_t, uint16_t, int32_t, int32_t, int32_t, int32_t);
extern int32_t func_ov001_021782b4(int32_t *, uint8_t *, int32_t, int32_t);

int32_t func_ov001_02178454(int32_t *a, uint8_t *p, int32_t b, int32_t n)
{
    int32_t r6 = 0;
    int32_t r4 = n;
    int32_t r7 = a[0];
    int32_t v;

    if (r4 == 0) {
        return 0;
    }
    if (*(int32_t *)(p + 0x34) - *(int32_t *)(p + 0x38)) {
        goto skip;
    }
    if (func_ov000_02168768(*(int32_t *)(p + 0x3c)) != 0) {
        goto skip;
    }
    v = func_ov000_021670e8(*(int32_t *)(p + 8), *(uint16_t *)(p + 0xc));
    if (r4 <= v - 0x17) {
        func_ov000_02166d80(*(int32_t *)(p + 8), *(uint16_t *)(p + 0xc), r7 + 0x220, b, r4, 1);
        r6 = r4;
        r4 = 0;
    } else {
        v = func_ov000_021670e8(*(int32_t *)(p + 8), *(uint16_t *)(p + 0xc));
        if ((uint32_t)v > 0x17) {
            r6 = v - 0x17;
            func_ov000_02166d80(*(int32_t *)(p + 8), *(uint16_t *)(p + 0xc), r7 + 0x220, b, r6, 1);
            r4 -= r6;
        }
    }
skip:
    if (r4 != 0) {
        v = func_ov001_021782b4(a, p + 0x2c, b + r6, r4);
        if (v != 0) {
            return v;
        }
    }
    return 0;
}
