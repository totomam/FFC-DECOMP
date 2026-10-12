#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair8;

extern void func_0203cac0(void *obj);
extern uint32_t func_0203c848(void *obj, int32_t flag);
extern void func_02056bc0(void *object, void *node);
extern Pair8 data_020aece0;

void func_0203cb44(void *p)
{
    uint8_t *base = (uint8_t *)p;
    *(uint32_t *)(base + 0xd0) = 1;
    if (*(uint32_t *)(base + 0x8c) != 0) {
        func_0203cac0(p);
    }
    {
        uint32_t r = func_0203c848(p, 1);
        func_02056bc0(base + 0x14, (void *)r);
    }
    {
        Pair8 *d = &data_020aece0;
        uint32_t x = d->a;
        uint32_t y = d->b;
        uint32_t *p80 = (uint32_t *)(base + 0x80);
        uint32_t *p84 = (uint32_t *)(base + 0x84);
        *p84 = y;
        *p80 = x;
    }
}
