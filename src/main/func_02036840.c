#include "ffc/types.h"
extern void *func_020903cc();
typedef struct { uint32_t f:1; uint32_t pad:31; uint32_t cnt; uint16_t *p; } S;
typedef struct { uint8_t f:1; uint8_t n:7; } T;
void func_02036840(uint8_t *a, S *b) {
    uint32_t i = 0;
    uint32_t f;
    uint32_t n;
    func_020903cc(a + 4, 0, 0x2a);
    goto cond;
body:
    {
        uint16_t *s;
        if (f == 0) s = (uint16_t *)((uint8_t*)b + 2); else s = b->p;
        ((uint16_t *)a)[2 + i] = s[i];
    }
    i++;
cond:
    f = b->f ? 1 : 0;
    if (f) n = b->cnt; else n = ((T*)b)->n;
    if (i < n) goto body;
}
