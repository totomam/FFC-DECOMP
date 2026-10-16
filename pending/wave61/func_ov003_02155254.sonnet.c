#include "ffc/types.h"
typedef struct { uint16_t a, b; } P;
typedef struct { uint8_t pad[0x18]; P *data; uint32_t n; uint32_t cap; } V;
typedef struct { uint8_t f; } S;
extern void func_ov003_0215bd44(void *v, P *p, S s);
void func_ov003_02155254(V *v, uint16_t a, uint16_t b) {
    S s;
    P l;
    P *p;
    uint32_t n;
    s.f = 0;
    l.a = a;
    l.b = b;
    p = &l;
    n = v->n;
    if (n < v->cap) {
        v->n = n + 1;
        *(P *)((uint8_t *)v->data + (v->n - 1) * 4) = *p;
        return;
    }
    func_ov003_0215bd44(&v->data, p, s);
}
