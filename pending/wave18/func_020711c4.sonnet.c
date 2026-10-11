#include "ffc/types.h"

extern uint32_t func_02071170(void *a, uint32_t b);

typedef struct { uint32_t x[3]; uint32_t v; } Sub;
typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Sub *d;
    uint32_t e[3];
} Elem;

typedef struct {
    uint8_t pad[0x14];
    Elem *arr;
} Obj;

uint32_t func_020711c4(Obj *p, int idx) {
    Elem *e = &p->arr[idx];
    if (e->c == 0) return 0;
    return func_02071170(p, e->d[e->b].v);
}
