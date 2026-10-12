#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0209cf5c(void *arr, int n, int size, void *ctor, void *dtor);
extern void func_02084ca4(void *a, void *b, int c);
extern void *func_02035fd0(void *o);
extern void func_02035f58(void *o);
extern char data_020ac658[];

typedef struct Blob {
    uint8_t raw[0x98];
} Blob;

void *func_ov001_0218a2b4(void *self0, uint32_t x, Blob b, uint8_t *p, void *q)
{
    uint8_t *self = (uint8_t *)self0;
    uint32_t i;
    uint16_t *src16;
    uint16_t *dst16;
    uint32_t tmp;

    *(uint32_t *)(self + 8) = 0;
    *(uint32_t *)(self + 0xc) = 0x100b4;
    *(void **)(self + 0) = data_020ac658;
    func_02036750(self + 0xac);
    func_0209cf5c(self + 0x104, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    *(uint32_t *)(self + 0x10) = x;

    dst16 = (uint16_t *)(self + 0x14);
    src16 = (uint16_t *)b.raw;
    for (i = 9; i != 0; i--) {
        *dst16++ = *src16++;
    }
    tmp = 0;
    *(uint32_t *)(self + 0x28) = *(uint32_t *)(b.raw + 0x14);
    *(uint32_t *)(self + 0x2c) = *(uint32_t *)(b.raw + 0x18);
    *(uint32_t *)(self + 0x30) = *(uint32_t *)(b.raw + 0x1c);
    *(uint32_t *)(self + 0x34) = *(uint32_t *)(b.raw + 0x20);
    *(uint32_t *)(self + 0x38) = *(uint32_t *)(b.raw + 0x24);
    *(uint32_t *)(self + 0x3c) = *(uint32_t *)(b.raw + 0x28);
    *(uint32_t *)(self + 0x40) = *(uint32_t *)(b.raw + 0x2c);
    *(uint32_t *)(self + 0x44) = *(uint32_t *)(b.raw + 0x30);
    *(uint32_t *)(self + 0x48) = *(uint32_t *)(b.raw + 0x34);
    *(uint32_t *)(self + 0x4c) = *(uint32_t *)(b.raw + 0x38);
    *(uint32_t *)(self + 0x50) = *(uint32_t *)(b.raw + 0x3c);
    *(uint32_t *)(self + 0x54) = *(uint32_t *)(b.raw + 0x40);
    *(uint32_t *)(self + 0x58) = *(uint32_t *)(b.raw + 0x44);
    *(uint32_t *)(self + 0x5c) = *(uint32_t *)(b.raw + 0x48);
    *(uint32_t *)(self + 0x60) = *(uint32_t *)(b.raw + 0x4c);
    *(uint32_t *)(self + 0x64) = *(uint32_t *)(b.raw + 0x50);
    *(uint32_t *)(self + 0x68) = *(uint32_t *)(b.raw + 0x54);
    *(uint32_t *)(self + 0x6c) = *(uint32_t *)(b.raw + 0x58);
    *(uint32_t *)(self + 0x70) = *(uint32_t *)(b.raw + 0x5c);
    *(uint32_t *)(self + 0x74) = *(uint32_t *)(b.raw + 0x60);
    *(uint32_t *)(self + 0x78) = *(uint32_t *)(b.raw + 0x64);
    *(uint32_t *)(self + 0x7c) = *(uint32_t *)(b.raw + 0x68);
    *(uint32_t *)(self + 0x80) = *(uint32_t *)(b.raw + 0x6c);
    *(uint32_t *)(self + 0x84) = *(uint32_t *)(b.raw + 0x70);
    *(uint32_t *)(self + 0x88) = *(uint32_t *)(b.raw + 0x74);
    *(uint32_t *)(self + 0x8c) = *(uint32_t *)(b.raw + 0x78);
    *(uint32_t *)(self + 0x90) = *(uint32_t *)(b.raw + 0x7c);
    *(uint32_t *)(self + 0x94) = *(uint32_t *)(b.raw + 0x80);
    *(uint32_t *)(self + 0x98) = *(uint32_t *)(b.raw + 0x84);
    *(uint32_t *)(self + 0x9c) = *(uint32_t *)(b.raw + 0x88);
    *(uint32_t *)(self + 0xa0) = *(uint32_t *)(b.raw + 0x8c);
    *(uint32_t *)(self + 0xa4) = *(uint32_t *)(b.raw + 0x90);

    dst16 = (uint16_t *)(self + 0xb0);
    src16 = (uint16_t *)(p + 4);
    for (i = 21; i != 0; i--) {
        *dst16++ = *src16++;
    }

    *(uint32_t *)(self + 0xdc) = *(uint32_t *)(p + 0x30);
    {
        uint8_t *d = self + 0xe0;
        uint8_t *s = p + 0x34;
        for (i = 20; i != 0; i--) {
            *d++ = *s++;
        }
    }
    {
        uint32_t *d = (uint32_t *)(self + 0xf4);
        uint32_t *s = (uint32_t *)(p + 0x48);
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
    }
    func_02084ca4(q, self + 0x104, 0x1e0);
    return self;
}
