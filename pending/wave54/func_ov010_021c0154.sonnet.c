#include "ffc/types.h"

extern int func_020367bc(void *p, uint32_t idx);
extern void func_0200d5d4(void *object, uint32_t value);

void func_ov010_021c0154(uint8_t *self, uint32_t unused, uint8_t *src)
{
    uint32_t cnt;
    uint16_t *d16;
    uint16_t *s16;
    uint8_t *d8;
    uint8_t *s8;
    uint32_t *d32;
    uint32_t *s32;
    uint32_t a;
    uint32_t idx;
    uint8_t i;
    uint8_t n;

    self[0x119] = 0;

    cnt = 0x15;
    d16 = (uint16_t *)(self + 0x128);
    s16 = (uint16_t *)(src + 4);
    do {
        *d16++ = *s16++;
    } while (--cnt);

    *(uint32_t *)(self + 0x154) = *(uint32_t *)(src + 0x30);

    cnt = 0x14;
    d8 = self + 0x158;
    s8 = src + 0x34;
    do {
        *d8++ = *s8++;
    } while (--cnt);

    d32 = (uint32_t *)(self + 0x16c);
    s32 = (uint32_t *)(src + 0x48);
    d32[0] = s32[0];
    d32[1] = s32[1];
    d32[2] = s32[2];
    d32[3] = s32[3];

    self[0x120] = 2;

    a = *(uint32_t *)(self + 0xf8);
    *(uint32_t *)(self + 0xf8) = *(uint32_t *)(self + 0xf8) - a;

    n = 0;
    i = 0;
    do {
        if (i == *(uint32_t *)(self + 0x10c)) {
            *(uint32_t *)(self + 0x10c) = n;
        }
        if (func_020367bc(self + 0x124, i)) {
            if (*(uint32_t *)(self + 0xf8) < *(uint32_t *)(self + 0xfc)) {
                idx = ++*(uint32_t *)(self + 0xf8);
                ((uint32_t *)(self + 0xf4))[idx - 1] = i;
            } else {
                func_0200d5d4(self + 0xf4, i);
            }
            n++;
        }
        i++;
    } while (i < 5);

    *(uint32_t *)(self + 0x110) = (uint32_t)(n - 1);
}
