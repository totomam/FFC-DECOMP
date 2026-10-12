#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} V2;

typedef struct {
    volatile int32_t s[4];
    V2 tmp;
    V2 d;
} L;

void func_ov004_0214e654(uint8_t *self, int32_t a, int32_t b, ...) {
    L l;
    int32_t *ap = &b;
    int32_t y = ap[0];
    void **obj = *(void ***)(self + 0x8c);
    void **vt = *(void ***)obj;
    ((void (*)(V2 *, void **))vt[6])(&l.tmp, obj);
    l.d.x = -(l.tmp.x - 256) / 2 + ap[-1];
    l.d.y = -(l.tmp.y - 192) / 2 + y;
    {
        void **obj2 = *(void ***)(self + 0x8c);
        void **vt2 = *(void ***)obj2;
        ((void (*)(void **, V2))vt2[3])(obj2, l.d);
    }
    {
        uint8_t *p = *(uint8_t **)(self + 0xe0);
        l.s[2] = l.s[0] = -ap[-1];
        l.s[3] = l.s[1] = -y;
        *(int32_t *)(p + 0x34) = -ap[-1];
        *(int32_t *)(p + 0x38) = -y;
    }
}
