#include "ffc/types.h"

extern char data_020ae6d4[];
extern char data_ov002_021d5358[];
extern char data_ov002_021d5374[];
extern char data_020ae644[];
extern char data_020ae654[];

extern void func_02056c9c(uint8_t *self, uint32_t zero);
extern void func_02087620(void *object);
extern void func_ov002_021d3298(uint8_t *obj);
extern void func_ov002_021aa044(uint8_t *a, uint8_t *b);
extern void func_ov002_021d334c(uint8_t *obj, void *a);
extern void func_ov002_021aa41c(uint8_t *self, void *a, uint32_t b, uint32_t c, void *d);

uint8_t *func_ov002_021aa2d0(uint8_t *self, void *p1, void *p2, void *p3, void *p4, void *p5, uint32_t *p6, void *p7, void *p8)
{
    uint32_t *d = (uint32_t *)(self + 0xd8);
    uint32_t *a6 = p6;
    uint16_t *src;
    uint16_t *dst;
    int i;

    func_02056c9c(self, 0);
    *(char **)(self + 0x80) = data_020ae6d4;
    *(uint32_t *)(self + 0x84) = 0;
    *(uint32_t *)(self + 0x88) = 0;
    *(uint32_t *)(self + 0x8c) = 0;
    *(uint32_t *)(self + 0x90) = 0;
    *(uint32_t *)(self + 0x94) = 0;
    *(uint32_t *)(self + 0x98) = 0;
    func_02087620(self + 0x9c);
    *(char **)self = data_ov002_021d5358;
    *(char **)(self + 0x80) = data_ov002_021d5374;
    *(void **)(self + 0xb8) = p1;
    *(void **)(self + 0xbc) = p2;
    *(uint32_t *)(self + 0xc0) = 0;
    *(void **)(self + 0xc4) = p4;
    *(void **)(self + 0xc8) = p5;
    *(void **)(self + 0xcc) = p5;
    d[0] = a6[0];
    d[1] = (uint32_t)data_020ae644;
    d[2] = a6[2];
    d[3] = (uint32_t)data_020ae644;
    d[4] = a6[4];
    d[5] = (uint32_t)data_020ae644;
    d[6] = a6[6];
    d[7] = (uint32_t)data_020ae644;
    d[8] = a6[8];
    d[9] = (uint32_t)data_020ae654;
    d[10] = a6[10];
    d[11] = a6[11];
    src = (uint16_t *)(a6 + 12);
    dst = (uint16_t *)(d + 12);
    for (i = 0x11; i != 0; i--) {
        *dst++ = *src++;
    }
    d[21] = a6[21];
    d[22] = a6[22];
    d[23] = a6[23];
    func_ov002_021d3298(self + 0x13c);
    *(uint32_t *)(self + 0x184) = 0;
    *(uint32_t *)(self + 0x188) = 0;
    *(uint32_t *)(self + 0x18c) = 0;
    func_ov002_021aa044(self + 0x190, self + 0x184);
    *(uint8_t *)(self + 0x248) = 0;
    *(uint8_t *)(self + 0x249) = 0;
    *(uint8_t *)(self + 0x250) = 0;
    *(void **)(self + 0x254) = p8;
    *(uint8_t *)(self + 0x258) = 0;
    *(uint32_t *)(self + 0x25c) = 0;
    func_ov002_021d334c(self + 0x13c, p7);
    for (i = 0; i < 2; i++) {
        self[0x168 + i] = 0;
    }
    func_ov002_021aa41c(self, p3, 1, 0, p3);
    return self;
}
