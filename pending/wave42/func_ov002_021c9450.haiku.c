#include "ffc/types.h"

extern void func_ov002_021c8e44(void *p);
extern uint8_t data_020ab838[];

void *func_ov002_021c9450(void *self, uint32_t r1, const void *src)
{
    uint8_t *o = (uint8_t *)self;
    volatile const uint8_t *s = (volatile const uint8_t *)src;

    *(uint32_t *)(o + 0x8) = 0;
    *(uint32_t *)(o + 0xc) = 0x10100;
    *(uint8_t **)(o + 0x0) = data_020ab838;
    func_ov002_021c8e44(o + 0x14);
    *(uint32_t *)(o + 0x10) = r1;
    *(uint32_t *)(o + 0x14) = *(volatile uint32_t *)(s + 0x0);
    *(uint32_t *)(o + 0x18) = *(volatile uint32_t *)(s + 0x4);
    *(uint32_t *)(o + 0x1c) = *(volatile uint32_t *)(s + 0x8);
    *(uint32_t *)(o + 0x20) = *(volatile uint32_t *)(s + 0xc);
    *(uint32_t *)(o + 0x24) = *(volatile uint32_t *)(s + 0x10);
    o[0x28] = s[0x14];
    *(uint32_t *)(o + 0x2c) = *(volatile uint32_t *)(s + 0x18);
    o[0x30] = s[0x1c];
    *(uint32_t *)(o + 0x34) = *(volatile uint32_t *)(s + 0x20);
    *(uint32_t *)(o + 0x38) = *(volatile uint32_t *)(s + 0x24);
    o[0x3c] = s[0x28];
    o[0x3d] = s[0x29];
    *(uint32_t *)(o + 0x40) = *(volatile uint32_t *)(s + 0x2c);
    *(uint32_t *)(o + 0x44) = *(volatile uint32_t *)(s + 0x30);
    o[0x48] = s[0x34];
    *(uint32_t *)(o + 0x4c) = *(volatile uint32_t *)(s + 0x38);
    *(uint32_t *)(o + 0x50) = *(volatile uint32_t *)(s + 0x3c);
    *(uint32_t *)(o + 0x54) = *(volatile uint32_t *)(s + 0x40);
    *(uint32_t *)(o + 0x58) = *(volatile uint32_t *)(s + 0x44);
    *(uint32_t *)(o + 0x5c) = *(volatile uint32_t *)(s + 0x48);
    *(uint32_t *)(o + 0x60) = *(volatile uint32_t *)(s + 0x4c);
    o[0x64] = s[0x50];
    o[0x65] = s[0x51];
    *(uint32_t *)(o + 0x68) = *(volatile uint32_t *)(s + 0x54);
    *(uint32_t *)(o + 0x6c) = *(volatile uint32_t *)(s + 0x58);
    return o;
}
