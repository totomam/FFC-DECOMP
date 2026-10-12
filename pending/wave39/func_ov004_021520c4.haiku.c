#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint16_t e;
    uint32_t f;
} Elem;

typedef struct {
    Elem *base;
    int32_t count;
} Arr;

Elem *func_ov004_021520c4(Arr *s, Elem *p) {
    Elem *end;
    int32_t n;
    int32_t cnt;
    cnt = s->count;
    end = s->base + cnt;
    n = func_0209a76c((int32_t)((uint8_t *)end - (uint8_t *)p), 0x18);
    if (n - 1 != 0) {
        Elem *dst = p;
        Elem *src = p + 1;
        while (src < end) {
            dst->a = src->a;
            dst->b = src->b;
            dst->c = src->c;
            dst->d = src->d;
            dst->e = src->e;
            dst->f = src->f;
            src++;
            dst++;
        }
    }
    s->count = s->count - 1;
    return p;
}
