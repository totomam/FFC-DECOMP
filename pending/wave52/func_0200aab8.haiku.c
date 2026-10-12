#include "ffc/types.h"

extern void func_02056c9c(void *self);
extern void func_020095b8(void *self, uint32_t v);
extern void func_0209cf5c(void *self, uint32_t a, uint32_t b, void *f, void *g);
extern char data_020aaf98[];
extern void func_0200ab6c(void);
extern void func_0200ab60(void);
extern uint32_t data_020aafc4[];

uint32_t func_0200aab8(void *self, uint32_t unused, uint32_t p2, uint32_t p3, uint8_t p4)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t i;
    uint32_t j;
    uint32_t *a;
    uint32_t *b;

    func_02056c9c(self);
    *(void **)p = data_020aaf98;
    func_020095b8(p + 0x90, p2);
    *(uint32_t *)(p + 0xa0) = p3;
    *(uint32_t *)(p + 0xa4) = 0;
    *(uint32_t *)(p + 0xa8) = 0;
    func_0209cf5c(p + 0xb4, 10, 12, (void *)func_0200ab60, (void *)func_0200ab6c);
    a = (uint32_t *)(p + 0x134);
    for (i = 0; i < 3; i++) {
        j = i;
        a[i] = j;
    }
    b = (uint32_t *)(p + 0x140);
    for (; j < 3; j++) {
        b[j] = 0;
    }
    *(uint32_t *)(p + 0x14c) = 0;
    *(uint32_t *)(p + 0x150) = 0;
    *(uint8_t *)(p + 0x154) = p4;
    *(uint32_t *)(p + 0x158) = 0;
    *(uint32_t *)(p + 0x80) = data_020aafc4[0];
    *(uint32_t *)(p + 0x84) = data_020aafc4[1];
    return 0;
}
