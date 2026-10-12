#include "ffc/types.h"

extern int32_t func_02024928(uint32_t a, uint32_t b, uint32_t c);
extern void func_0202b258(void *obj, uint32_t a, int32_t b);

void func_ov003_021581f4(uint8_t *p5, uint32_t p1, uint8_t *p4)
{
    uint32_t a, c;
    int32_t r4;
    int32_t r6;

    if (p4 == 0) return;
    if (*(uint8_t **)(p4 + 0x110) == 0) return;
    a = *(uint32_t *)(*(uint8_t **)(p4 + 0x110) + 0x34);
    if (a == 0) return;
    if (*(uint8_t **)(p5 + 0x110) == 0) return;
    c = *(uint32_t *)(*(uint8_t **)(p5 + 0x110) + 0x34);
    if (c == 0) return;

    r6 = func_02024928(a, p1, c);
    r4 = (int32_t)*(uint8_t **)(p4 + 0x110);
    if (r6 == -1) {
        r4 = 0;
    }
    func_0202b258(*(void **)(p5 + 0x110), (uint32_t)r4, r6);
    if (*(uint8_t **)(p5 + 0x118) != 0) {
        func_0202b258(*(void **)(p5 + 0x118), (uint32_t)r4, r6);
    }
    if (*(uint8_t **)(p5 + 0x11C) != 0) {
        func_0202b258(*(void **)(p5 + 0x11C), (uint32_t)r4, r6);
    }
    *(uint32_t *)(p5 + 0x36C) = 0;
}
