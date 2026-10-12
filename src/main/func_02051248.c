#include "ffc/types.h"

extern uint32_t func_02051458(uint16_t v);
extern void func_02037500(void *p, int8_t v);

typedef struct { uint8_t x:1; uint8_t sz:7; } B;
typedef struct { uint32_t heap:1; uint32_t sz:31; uint32_t n; uint16_t *h; } S;

void func_02051248(uint32_t *out, S *s)
{
    uint32_t i;
    uint16_t *p;
    uint32_t m = 0xff0000;

    for (i = 0; i < 3; i++) out[i] = 0;

    if (!s->heap) p = (uint16_t *)((uint8_t *)s + 2); else p = s->h;
    goto check;
body:
    {
        uint32_t r4 = func_02051458(*p);
        if (r4 & m) func_02037500(out, (int8_t)(r4 >> 16));
        if (r4 & (m >> 8)) func_02037500(out, (int8_t)(r4 >> 8));
        if (r4 & 0xff) func_02037500(out, (int8_t)r4);
        p++;
    }
check:
    {
        uint32_t n; uint16_t *e;
        if (!s->heap) { e = (uint16_t *)((uint8_t *)s + 2); n = ((B *)s)->sz; }
        else { e = s->h; n = s->n; }
        if (p != e + n) goto body;
    }
}
