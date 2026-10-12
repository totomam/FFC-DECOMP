#include "ffc/types.h"

typedef struct { uint32_t w[6]; } Blk;
typedef struct {
    uint32_t a, b, c, d, e;
    Blk blk;
    uint32_t z;
} Elem;

typedef struct {
    Elem *data;
    uint32_t count;
} Pool;

typedef struct { uint8_t b; } Flag;

extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_ov002_021d2d4c(Pool *p, int32_t n, Flag f);

void func_ov002_021d2cd0(Pool *p, Elem *begin, Elem *end)
{
    int32_t n = func_0209a76c((int32_t)((uint8_t *)end - (uint8_t *)begin), 0x30);
    Elem *dst;
    Flag f;
    uint32_t c;
    if (n == 0) {
        return;
    }
    Flag t; t.b = 0; f = t;
    func_ov002_021d2d4c(p, n, f);
    c = p->count;
    dst = (Elem *)((uint8_t *)p->data + c * 0x30);
    if (begin == end) return;
    do {
        if (dst != 0) {
            dst->a = begin->a;
            dst->b = begin->b;
            dst->c = begin->c;
            dst->d = begin->d;
            dst->e = begin->e;
            dst->blk = begin->blk;
            dst->z = begin->z;
        }
        begin++;
        c = p->count + 1;
        dst++;
        p->count = c;
    } while (begin != end);
}
