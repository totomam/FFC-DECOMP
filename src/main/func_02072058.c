#include "ffc/types.h"

extern void *func_02056830(uint32_t size);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02071ecc(uint32_t a, void *p);
extern uint32_t data_020b24f8;

typedef struct {
    uint32_t vtbl;
    uint32_t pad4;
    uint32_t n;
    void *arr1;
    void *arr2;
} Obj;

Obj *func_02072058(Obj *p, uint32_t n)
{
    uint32_t i;
    p->n = n;
    p->vtbl = (uint32_t)&data_020b24f8;
    p->arr1 = func_02056830(n * 12);
    p->arr2 = func_02056830(p->n << 2);
    for (i = 0; i < p->n; i++) {
        uint32_t r = (uint32_t)func_0205681c(16);
        if (r != 0) {
            r = func_02071ecc(r, (char *)p->arr1 + i * 12);
        }
        ((uint32_t *)p->arr2)[i] = r;
    }
    return p;
}
