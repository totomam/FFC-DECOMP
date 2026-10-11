#include "ffc/types.h"
typedef struct { uint8_t b; } B;
typedef struct { uint8_t p; B b; } W;
typedef struct { uint32_t a, b; } Pair;
typedef struct { Pair *data; uint32_t count; uint32_t cap; } Vec;
extern void func_ov004_02148668(Vec *v, Pair *e, B x);
void func_ov004_0214fe94(Vec *v, Pair *e)
{
    uint8_t zero = 0;
    uint32_t n = v->count;
    if (n < v->cap) {
        Pair *d = v->data + n;
        if (d != (Pair *)zero) *d = *e;
        v->count = v->count + 1;
    } else {
        W w;
        B *p = &w.b;
        p->b = zero;
        func_ov004_02148668(v, e, *p);
    }
}
