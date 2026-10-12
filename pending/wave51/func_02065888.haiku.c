#include "ffc/types.h"

extern uint32_t func_020901dc(uint32_t x);

typedef struct {
    uint32_t *ptr;
    uint32_t bit;
} BitWriter;

void func_02065888(BitWriter *p, uint32_t n, uint8_t *v, ...)
{
    uint32_t buf[2];
    uint32_t cur, *sel, m, mask, hi, lo;
    uint32_t neg, ones;

    if (n != 0) {
        neg = -(uint32_t)*v;
        cur = func_020901dc(p->bit);
        ones = 0;
        ones = ~ones;
        do {
            buf[1] = cur + 1;
            sel = (n < buf[1]) ? &n : &buf[1];
            m = *sel;
            hi = ones << (31 - cur);
            lo = ones >> (cur + 1 - m);
            mask = hi & lo;
            *p->ptr &= ~mask;
            *p->ptr = (*p->ptr & ~mask) | (neg & mask);
            n -= m;
            if (n == 0) {
                break;
            }
            p->ptr = p->ptr + 1;
            cur = 31;
        } while (1);
    }
}
