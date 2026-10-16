#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { P *data; uint32_t size; uint32_t cap; } V;
typedef struct { uint8_t c; } S;
typedef struct { uint8_t pad; S s; } W;
extern void func_ov004_02148668(V *v, P *p, S s);
void func_ov004_0214fe94(V *v, P *p) {
    W w;
    uint32_t n = v->size;
    uint32_t c = v->cap;
    uint8_t z = 0;
    if (n < c) {
        P *d = v->data + n;
        if (d != 0) { *d = *p; }
        v->size++;
        return;
    }
    {
    uint8_t *q = &w.s.c;
    *q = z;
    func_ov004_02148668(v, p, *(S*)q);
    }
}
