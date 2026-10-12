#include "ffc/types.h"

extern void func_02077bec(void *self, uint32_t tag, void *p, uint32_t a, uint32_t b);
extern uint32_t func_02077ca8(uint32_t *args, uint32_t tag);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint16_t h10;
    uint16_t h12;
} Sub;

void *func_02077cc4(void *p, uint32_t a, uint32_t b)
{
    Sub *s = (Sub *)((uint8_t *)p + 0x24);
    uint32_t args[2];
    uint32_t r;

    func_02077bec(p, 0x45585048, (uint8_t *)s + 0x14, a, b);
    s->h12 = 0;
    s->h10 = 0;
    s->h12 = s->h12 & ~1;
    args[0] = *(uint32_t *)((uint8_t *)p + 0x18);
    args[1] = *(uint32_t *)((uint8_t *)p + 0x1c);
    r = func_02077ca8(args, 0x4652);
    *(uint32_t *)((uint8_t *)p + 0x24) = r;
    s->f4 = r;
    s->f8 = 0;
    s->fc = 0;
    return p;
}
