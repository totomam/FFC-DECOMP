#include "ffc/types.h"

extern void func_02059b60(void *self, void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02057c28(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_0209cf5c(void *p, uint32_t a, uint32_t b, void *c, void *d);
extern void func_02053524(void);
extern void func_02081a6c(void);
extern void func_02081c90(void);
extern void func_020830f0(uint32_t x);
extern void func_020831ec(uint32_t x);
extern void func_0205b3b4(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_0205b3c8(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t size);
extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern void func_02054714(void *p);
extern void func_0205b060(void);
extern void func_0205b04c(void);
extern char data_020b0e70[];
extern char data_020b0e8c[];
extern char data_020b0ea0[];

void *func_0205ae60(uint8_t *r6, uint8_t *r5, uint32_t r2, uint32_t r3)
{
    int i;
    uint32_t *p;
    uint32_t *q;
    void *r4;
    volatile uint16_t *reg;

    func_02059b60(r6, r5, 0, 0, 0, 0, 0);
    *(void **)r6 = data_020b0e70;
    *(uint32_t *)(r6 + 0x24) = r2;
    *(uint32_t *)(r6 + 0x28) = r3;
    func_02057c28(r6 + 0x34, 0, r2, 0x10);
    func_02057c28(r6 + 0x70, 0, r3, 0x10);
    func_0209cf5c(r6 + 0xac, 2, 0x18, (void *)func_0205b04c, (void *)func_0205b060);

    p = (uint32_t *)(r6 + 0xdc);
    p[0] = 0;
    q = p + 2;
    p[1] = 0;
    p[2] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    p = (uint32_t *)(r6 + 0xf4);
    p[0] = 0;
    q = p + 2;
    p[1] = 0;
    p[2] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;

    func_02053524();
    func_02081a6c();
    func_02081c90();

    reg = (volatile uint16_t *)0x4000060;
    *reg = (uint16_t)(*reg & -0x3003);
    *reg = (uint16_t)((*reg & -0x3001) | 0x10);
    *reg = (uint16_t)((*reg & -0x3001) | 0x8);

    *(uint32_t *)(r6 + 0x30) = 0;
    *(uint32_t *)(r6 + 0x2c) = 0;
    for (i = 0; i < 4; i++) {
        switch (*(uint32_t *)(r5 + 0x7c + i * 4)) {
        case 1: *(uint32_t *)(r6 + 0x30) |= 1; break;
        case 2: *(uint32_t *)(r6 + 0x30) |= 2; break;
        case 3: *(uint32_t *)(r6 + 0x30) |= 4; break;
        case 4: *(uint32_t *)(r6 + 0x30) |= 8; break;
        default: break;
        }
    }
    func_020830f0(*(uint32_t *)(r6 + 0x30));

    for (i = 0; i < 4; i++) {
        switch (*(uint32_t *)(r5 + 0x90 + i * 4)) {
        case 5: *(uint32_t *)(r6 + 0x2c) |= 0x10; break;
        case 6: *(uint32_t *)(r6 + 0x2c) |= 0x20; break;
        case 7: *(uint32_t *)(r6 + 0x2c) |= 0x40; break;
        default: break;
        }
    }
    func_020831ec(*(uint32_t *)(r6 + 0x2c));

    *(volatile uint32_t *)0x4000540 = 2;
    func_0205b3b4(r6, 0, 0x1f, 0x7fff, 0x3f, 0);
    func_0205b3c8(r6, 0, 0, 0xff, 0xbf);
    *(volatile uint32_t *)(0x4000540 - 0x9c) = 0x1f0080;
    *(volatile uint32_t *)(0x4000540 - 0x80) = 0x7fff7fff;
    *(volatile uint32_t *)(0x4000540 - 0x7c) = 0x7fff7fff;
    *(volatile uint32_t *)(0x4000540 - 0xc0) = 0x7fff;
    *(volatile uint32_t *)0x4000540 = 2;

    r4 = func_0205681c(0x24);
    if (r4 != 0) {
        func_020548b4(r4, 0, 0);
        *(void **)r4 = data_020b0e8c;
        *(void **)((uint8_t *)r4 + 0x14) = data_020b0ea0;
        *(void **)((uint8_t *)r4 + 0x20) = r6;
        func_02054714((uint8_t *)r4 + 0x14);
    }
    *(void **)(r6 + 0x10c) = r4;
    return r6;
}
