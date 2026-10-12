#include "ffc/types.h"

typedef struct { uint32_t f : 1; uint32_t pad : 31; uint32_t x; uint16_t *ext; } S;
typedef struct { uint8_t a; } B;
typedef struct { uint16_t *q; uint32_t pr; } T;

extern void func_0200a82c(S *p, int n, int zero, uint32_t *pa, uint16_t *pb, B b);

static inline uint16_t *get(S *p) { return !p->f ? (uint16_t *)((uint8_t *)p + 2) : p->ext; }

void func_02068bbc(uint16_t **out, S *p, T t)
{
    int n;
    B b;
    n = ((uint8_t *)t.q - (uint8_t *)get(p)) / 2;
    func_0200a82c(p, n, 0, &t.pr, (uint16_t *)((uint8_t *)&t + 6), b);
    *out = get(p) + n;
}
