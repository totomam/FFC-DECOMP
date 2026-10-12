#include "ffc/types.h"

extern void func_02056c9c(void *o, int x);
extern void *func_0205681c(uint32_t n);
extern void *func_0203431c(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern char data_ov004_02158934[];
extern char data_ov004_02159da4[];

void *func_ov004_02149a44(void *a0, void *a1)
{
    uint8_t *o = (uint8_t *)a0;
    uint32_t i;
    void *r;

    func_02056c9c(a0, 0);
    *(void **)o = data_ov004_02158934;
    *(void **)(o + 0x80) = a1;
    *(int32_t *)(o + 0xa4) = 0;
    for (i = 0; i < 0x19; i++) {
        o[0x88 + i] = 0;
    }
    o[0xa1] = 0;
    r = func_0205681c(0x3c);
    if (r != 0) {
        r = func_0203431c(r, data_ov004_02159da4);
    }
    *(void **)(o + 0x84) = r;
    func_02056bc0(o + 0x48, r);
    return a0;
}
