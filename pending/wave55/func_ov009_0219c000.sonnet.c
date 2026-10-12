#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_ov009_0219d9c8(void *a, int b, int c, int d);
extern void func_ov009_0219a9dc(void *a, int b);

#define VT(o) (*(void ***)(o))
#define VCALL6(o) ((void (*)(void *))VT(o)[6])(o)
#define VCALL7(o, a) ((void (*)(void *, int))VT(o)[7])(o, a)
#define VCALL11(o) ((void (*)(void *))VT(o)[11])(o)

void func_ov009_0219c000(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t i;
    int st = 0x61 * 4;
    int idx = 0x7f * 4;

    p[idx] = 1;
    VCALL11(*(void **)(p + 0xb8));
    VCALL11(*(void **)(p + 0xbc));
    VCALL11(*(void **)(p + 0xc0));
    func_02056c4c(*(void **)(p + idx - 0x7c));
    func_02056c4c(*(void **)(p + idx + 0xc));
    if (p[idx - 0x10] != 0) {
        if (*(int *)(p + idx - 0x78) < 3) {
            VCALL11(*(void **)(p + 0xac));
        }
    }

    switch (*(int *)(p + st)) {
    case 0:
        VCALL11(*(void **)(p + 0xf4));
        for (i = 0; i < 11; i++) {
            uint8_t *q = p + 4 * i;
            VCALL6(*(void **)(q + 0xc8));
            VCALL7(*(void **)(q + 0xc8), 0);
        }
        for (i = 0; i < 4; i++) {
            uint8_t *q = p + 4 * i;
            VCALL11(*(void **)(q + 0xfc));
        }
        if (p[0x204] == 0) {
            func_ov009_0219d9c8(*(void **)(p + 0x178), 0, 0, 0);
        }
        break;
    case 1:
    case 2:
        { int o1=st-0x78,o2=st-0x60,o3=st-0x48,o4=st-0x3c,o5=st-0x6c; int o6 = st - 8;
        for (i = 0; i < 3; i++) {
            uint8_t *q = p + 4 * i;
            VCALL11(*(void **)(q + o1));
            VCALL11(*(void **)(q + o2));
            VCALL6(*(void **)(q + o3));
            VCALL6(*(void **)(q + o4));
            VCALL11(*(void **)(q + o5));
            func_ov009_0219a9dc(*(void **)(p + o6), i);
        }}
        break;
    case 3:
    case 4:
        func_02056c4c(*(void **)(p + st - 0x14));
        break;
    }

    p[0x1ed] = 0;
    *(uint32_t *)(p + 0x1f0) = 0;
}
