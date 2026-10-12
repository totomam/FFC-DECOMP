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
    i = 0;
    do {
        j = i;
        a[i] = j;
        i++;
    } while (i < 3);
    b = (uint32_t *)(p + 0x140);
    do {
        b[j] = 0;
        j++;
    } while (j < 3);
    *(uint32_t *)(p + 0x14c) = 0;
    *(uint32_t *)(p + 0x150) = 0;
    *(uint8_t *)(p + 0x154) = p4;
    *(uint32_t *)(p + 0x158) = 0;
    {
        uint32_t x = data_020aafc4[0];
        uint32_t y = data_020aafc4[1];
        *(uint32_t *)(p + 0x80) = x;
        *(uint32_t *)(p + 0x84) = y;
    }
    return 0;
}
