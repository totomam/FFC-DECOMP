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
        uint32_t *pk = (v->size < s.n) ? &v->size : &s.n;
        E *stop = first + *pk;
        E *d = v->data;
        for (E *p = first; p < stop; p++) {
            *d = *p;
            d++;
        }
        if (s.n < v->size) {
            v->size -= v->size - s.n;
        } else if (v->size < s.n) {
            E *p = stop;
            E *dst = v->data + v->size;
            while (p != last) {
                if (dst != 0) {
                    *dst = *p;
                }
                v->size++;
                p++;
                dst++;
            }
        }
    } else {
        func_ov002_021a5124(v, s.n, t);
        E *dst = v->data + v->size;
        for (E *p = first; p != last; p++) {
            if (dst != 0) {
                *dst = *p;
            }
            v->size++;
            dst++;
        }
    }
}
