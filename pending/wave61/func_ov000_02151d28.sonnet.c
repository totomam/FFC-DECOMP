#include "ffc/types.h"
typedef struct { uint8_t a; uint8_t b; uint8_t lvl; uint8_t v:7; uint8_t f:1; } E;
typedef struct { uint8_t pad0[0xbf4]; E e[11]; uint8_t pad1[0xc20-0xbf4-44]; uint8_t q[0xc0*4]; uint8_t pad2[0x14bc-0xc20-0x300]; uint8_t g0:2; uint8_t g1:1; uint8_t g2:1;uint8_t g3:1; uint8_t flag:1; uint8_t g4:2; } S;
extern void func_020849f4(void *a, void *b, int n);
static inline uint8_t adj(S *s, int x) {
    if (s->flag == 1) {
        if (x & 2) x = (uint8_t)((uint32_t)x >> 2);
        else x = (uint8_t)((x >> 2) + 0x19);
    }
    return x;
}
void func_ov000_02151d28(int idx, uint8_t *p, int v, S *s) {
    E *e = &s->e[idx];
    uint8_t *q = s->q + idx * 0xc0;
    uint8_t c = adj(s, *(uint16_t *)(p + 2));
    if (c > e->lvl) {
        e->lvl = c;
        { uint8_t *b = (uint8_t *)e + 3; *b = (*b & ~0x7f) | (v & 0x7f); }
    }
    func_020849f4(p, q, 0xc0);
}
