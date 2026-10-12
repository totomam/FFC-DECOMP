#include "ffc/types.h"

typedef struct {
    uint32_t *bits;
    uint32_t pos;
    uint32_t size;
} BitStream;
typedef struct { uint32_t *w; uint32_t m; } Ref;

extern uint32_t func_0206583c(BitStream *s, int32_t n);
extern void func_020657e4(BitStream *s, uint32_t v);

static inline Ref getref(BitStream *p, uint32_t i)
{
    Ref r;
    r.w = &p->bits[i >> 5];
    r.m = 1u << (i & 31);
    return r;
}

static inline void apply(Ref r, int flag)
{
    if (flag) {
        *r.w |= r.m;
    } else {
        *r.w &= ~r.m;
    }
}

void func_ov007_021a6cd0(BitStream *p, int32_t flag)
{
    if (p->pos == (p->size << 5)) {
        uint32_t v = func_0206583c(p, 1);
        func_020657e4(p, v);
    }
    uint32_t n = p->pos + 1;
    p->pos = n;
    uint32_t i = n - 1;
    Ref r;
    r.w = &p->bits[i >> 5];
    r.m = 1u << (i & 31);
    apply(r, flag);
}
