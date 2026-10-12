#include "ffc/types.h"

extern uint8_t data_020ae644[];
extern uint8_t data_020ae654[];

void func_ov002_021aa7a0(uint32_t *o, uint32_t *s) {
    uint16_t *d;
    uint16_t *src;
    int n;
    o[2] = s[0xe0 / 4];
    o[0] = s[0xd8 / 4];
    o[4] = s[0xe8 / 4];
    o[1] = (uint32_t)data_020ae644;
    o[3] = (uint32_t)data_020ae644;
    o[5] = (uint32_t)data_020ae644;
    o[6] = s[0xf0 / 4];
    o[7] = (uint32_t)data_020ae644;
    o[8] = s[0xf8 / 4];
    o[10] = s[0x100 / 4];
    o[9] = (uint32_t)data_020ae654;
    o[11] = s[0x104 / 4];
    src = (uint16_t *)(s + 0x108 / 4);
    d = (uint16_t *)(o + 12);
    n = 17;
    do {
        *d++ = *src++;
    } while (--n != 0);
    o[0x54 / 4] = s[0x12c / 4];
    o[0x58 / 4] = s[0x130 / 4];
    o[0x5c / 4] = s[0x134 / 4];
}
