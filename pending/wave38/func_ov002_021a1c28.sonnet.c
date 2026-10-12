#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} E;

typedef struct {
    E *data;
    uint32_t size;
    uint32_t cap;
} V;

extern void *func_ov002_021a5164(void *self, uint32_t n);
extern void func_ov002_021a5124(void *self, uint32_t n, void *t);

static inline const uint32_t *mn(const uint32_t *a, const uint32_t *b) {
    return (*a < *b) ? a : b;
}
static inline E *cp(E *f, uint32_t k, E *d) {
    E *l = f + k;
    while (f < l) {
        d->a = f->a;
        d->b = f->b;
        f++;
        d++;
    }
    return l;
}
static inline E *adv(E *p, uint32_t k) {
    return p + k;
}

void func_ov002_021a1c28(V *v, E *first, E *last) {
    struct {
        uint32_t pad;
        uint32_t n;
    } s;
    void *t;
    int flag = 1;
    s.n = last - first;
    if (s.n > v->cap) {
        flag = 0;
        t = func_ov002_021a5164(v, s.n - v->cap);
    }
    if (flag != 0) {
        E *stop = cp(first, *mn(&v->size, &s.n), v->data);
        if (s.n < v->size) {
            v->size -= v->size - s.n;
        } else if (v->size < s.n) {
            E *p = stop;
            E *dst = v->data + v->size;
            while (p != last) {
                if (dst != 0) {
                    dst->a = p->a;
                    dst->b = p->b;
                }
                v->size++;
                p++;
                dst++;
            }
        }
    } else {
        func_ov002_021a5124(v, s.n, t);
        E *dst = v->data + v->size;
        while (first != last) {
            if (dst != 0) {
                dst->a = first->a;
                dst->b = first->b;
            }
            v->size++;
            first++;
            dst++;
        }
    }
}
