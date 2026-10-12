#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Elem;
typedef struct { Elem *data; int32_t size; int32_t cap; int32_t *pcap; } Tmp;
typedef struct { uint8_t a, b, c, d; } Flag;
typedef struct { Flag f; uint8_t pad[4]; Tmp t; int32_t rem; } Frame;
typedef struct { Elem *data; int32_t size; int32_t cap; } Vec;

extern uint32_t func_02069058(Vec *v, int32_t n);
extern void func_020691c0(Tmp *t, uint32_t amt, Flag f);
extern void *func_020691b0(void *object);

void *func_020690d8(Vec *v, int32_t n, Elem *src) {
    Frame fr;
    int32_t i;
    Elem *dst;
    Elem *end;
    uint32_t tc;
    Elem *od;

    fr.t.data = 0;
    fr.t.size = 0;
    fr.t.cap = 0;
    fr.t.pcap = &v->cap;
    fr.rem = 0;
    fr.f.a = 0;
    func_020691c0(&fr.t, func_02069058(v, v->size + n - v->cap), fr.f);
    fr.rem = v->size;

    dst = fr.t.data + v->size + fr.t.size;
    for (i = n; i != 0; i--) {
        dst->a = src->a;
        dst->b = src->b;
        dst->c = src->c;
        dst++;
    }
    fr.t.size += n;

    end = v->data + v->size;
    dst = fr.t.data + fr.rem;
    while (end > v->data) {
        end--;
        dst--;
        if (dst != 0) {
            dst->a = end->a;
            dst->b = end->b;
            dst->c = end->c;
        }
        fr.rem--;
        fr.t.size++;
    }

    v->size = 0;
    tc = v->cap;
    v->cap = fr.t.cap;
    fr.t.cap = tc;
    od = v->data;
    v->data = fr.t.data;
    fr.t.data = od;
    v->size = fr.t.size;
    fr.t.size = 0;
    return func_020691b0(&fr.t);
}
