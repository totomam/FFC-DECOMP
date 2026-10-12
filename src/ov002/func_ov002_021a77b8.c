#include "ffc/types.h"

extern void func_ov002_021c90a0(void *p, uint32_t a, uint32_t b, uint32_t c);
extern int data_020aca78;

#define W(base, off) (*(uint32_t *)((uint8_t *)(base) + (off)))
#define B(base, off) (*(uint8_t *)((uint8_t *)(base) + (off)))

void *func_ov002_021a77b8(void *self, uint32_t a, uint32_t b, uint32_t c, void *src, uint32_t d)
{
    W(self, 8) = 0;
    W(self, 0xc) = 0x100cc;
    W(self, 0) = (uint32_t)&data_020aca78;
    func_ov002_021c90a0((uint8_t *)self + 0x1c, a, b, c);
    W(self, 0x10) = a;
    W(self, 0x14) = b;
    W(self, 0x18) = c;
    W(self, 0x1c) = W(src, 0x00);
    W(self, 0x20) = W(src, 0x04);
    W(self, 0x24) = W(src, 0x08);
    W(self, 0x28) = W(src, 0x0c);
    W(self, 0x2c) = W(src, 0x10);
    W(self, 0x30) = W(src, 0x14);
    W(self, 0x34) = W(src, 0x18);
    W(self, 0x38) = W(src, 0x1c);
    W(self, 0x3c) = W(src, 0x20);
    W(self, 0x40) = W(src, 0x24);
    W(self, 0x44) = W(src, 0x28);
    B(self, 0x48) = B(src, 0x2c);
    W(self, 0x4c) = W(src, 0x30);
    W(self, 0x50) = W(src, 0x34);
    W(self, 0x54) = W(src, 0x38);
    W(self, 0x58) = W(src, 0x3c);
    W(self, 0x5c) = W(src, 0x40);
    W(self, 0x60) = W(src, 0x44);
    W(self, 0x64) = W(src, 0x48);
    W(self, 0x68) = W(src, 0x4c);
    W(self, 0x6c) = W(src, 0x50);
    W(self, 0x70) = W(src, 0x54);
    W(self, 0x74) = W(src, 0x58);
    B(self, 0x78) = B(src, 0x5c);
    W(self, 0x7c) = W(src, 0x60);
    W(self, 0x80) = W(src, 0x64);
    W(self, 0x84) = W(src, 0x68);
    W(self, 0x88) = W(src, 0x6c);
    W(self, 0x8c) = W(src, 0x70);
    W(self, 0x90) = W(src, 0x74);
    W(self, 0x94) = W(src, 0x78);
    W(self, 0x98) = W(src, 0x7c);
    W(self, 0x9c) = W(src, 0x80);
    W(self, 0xa0) = W(src, 0x84);
    W(self, 0xa4) = W(src, 0x88);
    B(self, 0xa8) = B(src, 0x8c);
    W(self, 0xac) = W(src, 0x90);
    W(self, 0xb0) = W(src, 0x94);
    W(self, 0xb4) = W(src, 0x98);
    W(self, 0xb8) = W(src, 0x9c);
    W(self, 0xbc) = W(src, 0xa0);
    W(self, 0xc0) = W(src, 0xa4);
    W(self, 0xc4) = W(src, 0xa8);
    W(self, 0xc8) = W(src, 0xac);
    W(self, 0xcc) = W(src, 0xb0);
    W(self, 0xd0) = W(src, 0xb4);
    W(self, 0xd4) = W(src, 0xb8);
    B(self, 0xd8) = B(src, 0xbc);
    W(self, 0xdc) = W(src, 0xc0);
    src = (uint8_t *)src + 0xc4;
    {
        uint8_t v = *(uint8_t *)src;
        B(self, 0xe0) = v;
    }
    W(self, 0xe4) = d;
    return self;
}
