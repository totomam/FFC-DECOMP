#include "ffc/types.h"
extern void *func_0204f0a4(void *p, uint32_t idx);
extern void *func_0204f0b0(void *p);
typedef struct { void *base; uint32_t idx; uint8_t c; uint32_t a; uint32_t b; uint32_t c2; uint32_t d; } S;
void *func_02060b4c(S *s)
{
    void *p = func_0204f0a4(s->base, s->idx);
    *(uint8_t *)p = s->c;
    if (s->idx < 2) {
        uint16_t *q;
        p = func_0204f0b0(s->base);
        q = (uint16_t *)p;
        q[0] = (uint16_t)((s->a << 8) | s->c2);
        q[2] = (uint16_t)((s->b << 8) | s->d);
    }
    return p;
}
