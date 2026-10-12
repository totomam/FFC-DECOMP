#include "ffc/types.h"

extern void func_02035f58(void *sub, uint32_t a, uint32_t b, uint32_t c);
extern char data_020ab758[];

void *func_ov002_021976b4(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3,
                          uint32_t a4, uint32_t a5, uint32_t *src, uint8_t a8, uint32_t a9)
{
    uint32_t i;
    uint16_t *d;
    uint16_t *s;


    *(uint32_t *)(p + 0x08) = 0;
    *(uint32_t *)(p + 0x0c) = 0x1013e;
    *(void **)(p + 0x00) = data_020ab758;
    func_02035f58(p + 0x24, a1, a2, a3);
    *(uint32_t *)(p + 0x10) = a1;
    *(uint32_t *)(p + 0x14) = a2;
    *(uint32_t *)(p + 0x18) = a3;
    *(uint32_t *)(p + 0x1c) = a4;
    *(uint32_t *)(p + 0x20) = a5;
    *(uint32_t *)(p + 0x24) = src[0];
    *(uint32_t *)(p + 0x2c) = src[2];
    *(uint32_t *)(p + 0x34) = src[4];
    *(uint32_t *)(p + 0x3c) = src[6];
    *(uint32_t *)(p + 0x44) = src[8];
    *(uint32_t *)(p + 0x4c) = src[10];
    *(uint32_t *)(p + 0x50) = src[11];
    s = (uint16_t *)src + 24;
    d = (uint16_t *)p + 42;
    i = 0x11;
    do {
        *d = *s;
        d++;
        s++;
    } while (--i);
    *(uint32_t *)(p + 0x78) = src[21];
    *(uint32_t *)(p + 0x7c) = src[22];
    *(uint32_t *)(p + 0x80) = src[23];
    *(uint8_t *)(p + 0x84) = a8;
    *(uint32_t *)(p + 0x88) = a9;
    return p;
}
