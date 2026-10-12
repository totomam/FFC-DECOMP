#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);

typedef struct Mid {
    uint32_t a[6];
} Mid;

typedef struct Elem {
    uint32_t f0, f1, f2, f3, f4;
    Mid mid;
    uint32_t last;
} Elem;

typedef struct Arr {
    Elem *data;
    int32_t count;
} Arr;

void *func_ov002_021d2ac4(Arr *self, void *p)
{
    Elem *volatile keepa[2]; keepa[0] = (Elem *)p;
    Elem *end = self->data + self->count;
    Elem *dst;
    Elem *src;

    if (func_0209a76c((uint32_t)end - (uint32_t)keepa[0], 0x30) - 1 != 0) {
        dst = keepa[0];
        src = dst + 1;
        while (src < end) {
            dst->f0 = src->f0;
            dst->f1 = src->f1;
            dst->f2 = src->f2;
            dst->f3 = src->f3;
            dst->f4 = src->f4;
            dst->mid = src->mid;
            dst->last = src->last;
            src++;
            dst++;
        }
    }
    self->count = self->count - 1;
    return (void *)keepa[0];
}
