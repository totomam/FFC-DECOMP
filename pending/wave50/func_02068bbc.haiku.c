#include "ffc/types.h"

typedef struct { uint32_t flags; uint32_t pad; uint16_t *ext; } S;
typedef struct { uint8_t a; uint8_t b; uint16_t c; } Pair;

extern void func_0200a82c(S *p, int n, int zero, Pair *pa, uint16_t *pb);

void func_02068bbc(uint16_t **out, S *p, uint16_t *q, Pair pr)
{
    uint8_t *base;
    int n;
    volatile uint8_t lb[8];
    if (p->flags & 1) {
        base = (uint8_t *)p->ext;
    } else {
        base = (uint8_t *)p + 2;
    }
    n = ((uint8_t *)q - base) / 2;
    lb[0] = lb[4];
    func_0200a82c(p, n, 0, &pr, (uint16_t *)((uint8_t *)&pr + 2));
    if (p->flags & 1) {
        base = (uint8_t *)p->ext;
    } else {
        base = (uint8_t *)p + 2;
    }
    *out = (uint16_t *)(base + 2 * n);
}
