#include "ffc/types.h"

extern void func_02035f58(void *p);
extern uint8_t data_020ab3b8;

uint8_t *func_ov002_021a2e9c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *e)
{
    uint32_t i;
    uint16_t *src;
    uint16_t *dst;

    *(uint32_t *)(p + 0x08) = 0;
    *(uint32_t *)(p + 0x0c) = 0x100fa;
    *(uint32_t *)(p + 0x00) = (uint32_t)&data_020ab3b8;
    func_02035f58(p + 0x20);
    *(uint32_t *)(p + 0x10) = a;
    *(uint32_t *)(p + 0x14) = b;
    *(uint32_t *)(p + 0x18) = c;
    *(uint32_t *)(p + 0x1c) = d;
    *(uint32_t *)(p + 0x20) = *(uint32_t *)(e + 0x00);
    *(uint32_t *)(p + 0x28) = *(uint32_t *)(e + 0x08);
    *(uint32_t *)(p + 0x30) = *(uint32_t *)(e + 0x10);
    *(uint32_t *)(p + 0x38) = *(uint32_t *)(e + 0x18);
    *(uint32_t *)(p + 0x40) = *(uint32_t *)(e + 0x20);
    *(uint32_t *)(p + 0x48) = *(uint32_t *)(e + 0x28);
    *(uint32_t *)(p + 0x4c) = *(uint32_t *)(e + 0x2c);
    src = (uint16_t *)(e + 0x30);
    dst = (uint16_t *)(p + 0x50);
    for (i = 0x11; i != 0; i--) {
        *dst++ = *src++;
    }
    *(uint32_t *)(p + 0x74) = *(uint32_t *)(e + 0x54);
    *(uint32_t *)(p + 0x78) = *(uint32_t *)(e + 0x58);
    *(uint32_t *)(p + 0x7c) = *(uint32_t *)(e + 0x5c);
    return p;
}
