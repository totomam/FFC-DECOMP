#include "ffc/types.h"

extern void func_ov004_02148668(void *v, uint32_t *e, uint32_t f);

typedef struct {
    uint8_t *data;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov004_0214fe94(Vec *v, Pair *e)
{
    uint8_t z = 0;
    uint32_t n = v->count;
    if (n < v->cap) {
        Pair *d = (Pair *)(v->data + (n << 3));
        if (d != 0) {
            *d = *e;
        }
        v->count = v->count + 1;
    } else {
        volatile uint8_t t = z;
        func_ov004_02148668(v, (uint32_t *)e, t);
    }
}
