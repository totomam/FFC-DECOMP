#include "ffc/types.h"
typedef struct { uint8_t v; } B;
typedef struct { uint32_t a, b, c, d; } E;
typedef struct { char pad[0x164]; E *data; uint32_t n; uint32_t cap; } Q;
extern void func_0202d0c8(void *p, E *s, B b);
void func_0202b3c8(Q *q, E *src)
{
    uint32_t n = q->n, cap = q->cap;
    uint32_t z = 0;
    if (n < cap) {
        E *e;
        q->n = n + 1;
        e = &q->data[q->n - 1];
        e->a = src->a;
        e->b = src->b;
        e->c = src->c;
        e->d = src->d;
        return;
    } else {
        B b, c;
        b.v = z;
        c = b;
        func_0202d0c8(&q->data, src, c);
    }
}
