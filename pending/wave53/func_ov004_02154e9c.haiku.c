#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef void (*VFn)(void *);
#define VCALL(o, n) (((VFn *)(*(void **)(o)))[n])(o)

typedef struct Elem {
    void *ptr[13];
} Elem;

typedef struct Ctx {
    uint8_t pad0[0xcc];
    uint32_t sel[17];
    uint8_t pad1[0x10];
    Elem el[1];
} Ctx;

int func_ov004_02154e9c(Ctx *a, uint32_t idx)
{
    int ret = 0;
    Elem *e = &a->el[idx];
    uint32_t *r6 = &a->sel[0];
    uint8_t *p;
    int flag;
    int c1;

    p = (uint8_t *)e->ptr[r6[idx]] + 0x14;
    flag = p[0x12];
    if (flag) {
        func_0208763c(p + 0x1c);
    }
    c1 = (*(uint32_t *)(p + 0x14) == 0);
    if (flag) {
        func_02087678(p + 0x1c);
    }

    if (c1) {
        uint32_t *r7 = &a->sel[17];
        if (r6[idx] != r7[idx]) {
            VCALL(e->ptr[r6[idx]], 5);
            r6[idx] = r7[idx];
            VCALL(e->ptr[r6[idx]], 4);
        }
        VCALL(e->ptr[r6[idx]], 6);
    }

    p = (uint8_t *)e->ptr[r6[idx]] + 0x14;
    flag = p[0x12];
    if (flag) {
        func_0208763c(p + 0x1c);
    }
    c1 = (*(uint32_t *)(p + 0x14) == 0);
    if (flag) {
        func_02087678(p + 0x1c);
    }
    if (!c1) {
        ret = 1;
    }
    return ret;
}
