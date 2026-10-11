#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t pad[0xec];
    void *tab[1];
} Obj;

extern void *func_0205681c(uint32_t size);
extern void func_ov009_021ad660(Pair *out, void *a, uint32_t b);
extern void *func_ov009_0219a130(void *obj, void *p, Pair v, uint32_t m, uint32_t n, uint32_t o, uint32_t q);
extern void func_020695ec(void *a, void *b);

void func_ov009_021a4670(void *a, uint32_t b)
{
    Pair pr;
    void *r4;
    uint8_t *tabp;

    r4 = func_0205681c(0xb4);
    if (r4 != 0) {
        func_ov009_021ad660(&pr, a, b);
        r4 = func_ov009_0219a130(r4, *(void **)((uint8_t *)a + 0xb8), pr, 0xffff, 1, 0, 0);
    }
    tabp = (uint8_t *)a + 0xec;
    ((void **)tabp)[b] = r4;
    func_020695ec(a, r4);
}
