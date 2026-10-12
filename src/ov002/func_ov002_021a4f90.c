#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void *func_02039594(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02055a2c(void *a, void *b);
extern void func_02039668(void *p, uint32_t n);
extern uint32_t data_020b0b68[];
extern uint32_t data_020b0b54[];

void *func_ov002_021a4f90(void *a, void *b)
{
    uint8_t *p;
    uint8_t *r6;
    uint32_t node;
    uint32_t m;

    m = 0xff;
    p = (uint8_t *)func_0205681c(0x34);
    if (p != 0) {
        *(uint32_t *)(p + 0xc) &= ~m;
        *(uint32_t **)p = data_020b0b68;
        func_02087620(p + 0x1c);
        p[0x10] = p[0x10] & ~m;
        p[0x11] = p[0x11] & ~m;
        p[0x12] = p[0x12] & ~m;
        *(uint32_t *)(p + 0x14) = 0;
        *(uint8_t **)(p + 0x18) = p + 0x14;
        *(uint32_t **)p = data_020b0b54;
        p[0x11] = (p[0x11] & ~m) | 1;
    }

    r6 = (uint8_t *)func_0205681c(0x60);
    if (r6 != 0) {
        r6 = (uint8_t *)func_02039594(r6, 0, 0, 0, 1);
    }

    func_02056bc0(p, r6);
    node = func_02055a2c(a, b);
    func_02056bc0(p, (void *)node);

    {
        uint8_t *t = r6;
        if (r6 != 0) {
            t = r6 + 0x14;
        }
        *(uint8_t **)((uint8_t *)b + 0x10) = t;
    }
    func_02039668(r6, *(uint32_t *)((uint8_t *)b + 0xc) + 1);
    return p;
}
