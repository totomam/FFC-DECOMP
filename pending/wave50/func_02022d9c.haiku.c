#include "ffc/types.h"

extern void func_02022cac(void *a, void *b, void *c, uint32_t d, uint32_t e, uint16_t f, uint16_t g);

void func_02022d9c(uint8_t *s, uint32_t *src, uint32_t a2, uint32_t a3, uint16_t a4, uint16_t a5)
{
    *(uint32_t *)(s + 0x68) = src[0];
    *(uint32_t *)(s + 0x6c) = src[1];
    *(uint32_t *)(s + 0x70) = src[2];
    func_02022cac(s + 0x5c, s + 0x74, s + 0x68, a2, a3, a4, a5);
    *(uint8_t *)(s + 0x21) = 1;
    *(uint8_t *)(s + 0x20) = 1;
    *(uint32_t *)(s + 0x23c) = a2;
    *(uint16_t *)(s + 0x240) = (uint16_t)a3;
    *(uint16_t *)(s + 0x242) = a4;
    *(uint16_t *)(s + 0x244) = a5;
}
