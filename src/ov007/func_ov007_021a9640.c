#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c4b38[];

void *func_ov007_021a9640(void *p, uint32_t r7, int32_t r4)
{
    uint8_t *s = (uint8_t *)p;
    uint8_t r6 = 0;
    uint8_t i;

    func_020694ac(p, 0, 0);
    *(uint8_t **)s = data_ov007_021c4b38;
    if (r4 >= 0) {
        r6 = 12;
    }
    s[0x134] = r6;
    s[0x135] = 0;
    s[0x134 + 0xf] = (uint8_t)r4;
    *(uint32_t *)(s + 0x134 + 0x10) = r7;
    s[0x134 + 0x14] = 1;
    *(uint32_t *)(s + 0x134 + 0x18) = 0;
    *(uint32_t *)(s + 0x134 + 0x1c) = 0;
    *(uint32_t *)(s + 0x134 + 0x20) = 0;
    for (i = 0; i < 12; i++) {
        s[0x134 + 2 + i] = 0xff;
    }
    return p;
}
