#include "ffc/types.h"
typedef struct { uint8_t c; } S;
extern void *func_0205681c(uint32_t n);
extern void *func_ov002_021b7c5c(void *p, void *a, uint32_t b);
extern void func_0200d5d4(void *object, void *value, S s);
extern void func_02056bc0(void *object, void *node);
typedef struct { void **data; uint32_t n; uint32_t cap; } V;
static inline void push(V *v, void **x, uint8_t f)
{
    uint32_t n = v->n;
    if (n < v->cap) {
        v->n = n + 1;
        v->data[n] = *x;
    } else {
        S s;
        uint8_t *p = &f;
        s.c = *p;
        func_0200d5d4(v, x, s);
    }
}
void *func_ov002_021b7bf0(uint8_t *self, void *a)
{
    void *node;
    void *t = func_0205681c(0x28);
    if (t != 0) t = func_ov002_021b7c5c(t, a, 6);
    node = t;
    push((V*)(self + 0x10d8), &node, 0);
    func_02056bc0(self + 0x48, node);
    return node;
}
