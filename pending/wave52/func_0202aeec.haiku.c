#include "ffc/types.h"

extern uint8_t data_020ada28[];

void func_0202aeec(uint8_t *p)
{
    uint32_t zero = 0;
    uint32_t one = 1;
    uint32_t idx = 0x184;

    *(uint32_t *)(p + 0x14) = zero;
    *(uint32_t *)(p + 0x20) = zero;
    *(uint32_t *)(p + 0x34) = zero;
    *(uint32_t *)(p + idx) = zero;
    *(uint32_t *)(p + idx + 4) = zero;
    *(uint32_t *)(p + idx + 8) = zero;
    *(uint32_t *)(p + idx + 0xc) = zero;
    p[0x40] = zero;
    *(uint32_t *)(p + 0x24) = one << 30;
    p[0x41] = one;
    p[0x42] = zero;
    p[0x43] = one;
    p[0x45] = zero;
    *(uint32_t *)(p + 0x60) = one << 12;
    p[0x70] = zero;
    *(uint16_t *)(p + 0x64) = 0x7fff;
    *(uint32_t *)(p + 0x14) = zero;
    *(uint32_t *)(p + 0x38) = zero;
    *(uint32_t *)(p + 0x4c) = zero;
    *(uint32_t *)(p + 0x50) = zero;
    *(uint32_t *)(p + idx + 0x14) = zero;
    *(uint32_t *)(p + 0x3c) = one - 2;
    p[0x44] = one;

    {
        uint8_t *dst;
        uint8_t *src;
        uint32_t n;
        idx -= 0x14;
        dst = p + idx;
        src = data_020ada28;
        n = 7;
        do {
            *dst++ = *src++;
        } while (--n != 0);
    }

    *(uint32_t *)(p + 0x194) = zero;
    p[0x46] = one;
    *(uint32_t *)(p + 0x74) = 0x10;
    p[0x71] = zero;
    p[0x49] = zero;
    p[0x47] = one;
    *(uint32_t *)(p + 0x20) = zero;
    *(uint32_t *)(p + 0x68) = zero;
    *(uint32_t *)(p + 0x6c) = zero;
    p[0x48] = one;
    p[0xb8] = zero;
}
