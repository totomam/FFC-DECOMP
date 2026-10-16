#include "ffc/types.h"
extern void func_020694ac(void *p, int a, int b);
extern char data_ov008_021a7d9c[];
void *func_ov008_0219be94(uint8_t *p, uint32_t v) {
    uint32_t *a, *b;
    func_020694ac(p, 0, 0);
    *(void **)p = data_ov008_021a7d9c;
    a = (uint32_t *)(p + 0xc4);
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xdc) = v;
    *(uint32_t *)(p + 0xec) = 0;
    *(uint32_t *)(p + 0xfc) = 0;
    a[1] = 0;
    a[2] = 0;
    *(uint32_t *)(p + 0x100) = 0;
    b = (uint32_t *)(p + 0xec);
    b[1] = 0;
    b[2] = 0;
    p[0x105] = 0;
    p[0x106] = 0;
    p[0x107] = 0;
    return p;
}
