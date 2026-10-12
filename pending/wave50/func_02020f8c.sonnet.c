#include "ffc/types.h"

typedef struct { uint32_t a, b; } V2;
typedef struct { uint32_t a, b, c, d; } Q;
typedef struct { V2 a; uint32_t z[4]; Q q; } Big;

extern void *func_0205681c(uint32_t size);
extern void *func_02020020(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_0202044c(void *obj, Q q);

void *func_02020f8c(V2 *a0, V2 *a1)
{
    Big big;
    void *obj = func_0205681c(0x8c);
    if (obj) {
        obj = func_02020020(obj, 0, 0, 0);
    }
    big.a = *a0;
    big.z[2] = 0;
    big.z[3] = 0;
    big.z[0] = 0;
    big.z[1] = 0;
    big.q.a = 0;
    big.q.b = 0;
    big.q.c = a0->a;
    big.q.d = a0->b;
    func_0202044c(obj, big.q);
    ((void (*)(void *, uint32_t))((void **)*(void ***)obj)[8])(obj, 0);
    ((void (*)(void *, uint32_t, uint32_t))((void **)*(void ***)obj)[3])(obj, a1->a, a1->b);
    return obj;
}
