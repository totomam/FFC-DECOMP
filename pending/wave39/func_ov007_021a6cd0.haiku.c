#include "ffc/types.h"

typedef struct {
    uint32_t *bits;
    uint32_t pos;
    uint32_t size;
} BitStream;

extern uint32_t func_0206583c(BitStream *s, int32_t n);
extern void func_020657e4(BitStream *s, uint32_t v);

void func_ov007_021a6cd0(BitStream *p, int32_t flag)
{
    if (p->pos == (p->size << 5)) {
        uint32_t v = func_0206583c(p, 1);
        func_020657e4(p, v);
    }
    uint32_t old = p->pos;
    p->pos = old + 1;
    uint32_t *w = &p->bits[old >> 5];
    uint32_t bit = 1u << (old & 31);
    if (flag) {
        *w |= bit;
    } else {
        *w &= ~bit;
    }
}
