#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} V2;

void func_ov004_0214e654(uint8_t *self, int32_t a, int32_t b, ...) {
    volatile int32_t s[4];
    V2 tmp;
    volatile int32_t d[2];
    void **obj = *(void ***)(self + 0x8c);
    void **vt = *(void ***)obj;
    ((void (*)(V2 *, void **))vt[6])(&tmp, obj);
    d[0] = (256 - tmp.x) / 2 + a;
    d[1] = (192 - tmp.y) / 2 + b;
    {
        void **obj2 = *(void ***)(self + 0x8c);
        void **vt2 = *(void ***)obj2;
        ((void (*)(void **, int32_t, int32_t))vt2[3])(obj2, d[0], d[1]);
    }
    {
        uint8_t *p = *(uint8_t **)(self + 0xe0);
        s[2] = -a;
        *(int32_t *)(p + 0x34) = -a;
        s[3] = -b;
        s[0] = -a;
        s[1] = -b;
        *(int32_t *)(p + 0x38) = -b;
    }
}
