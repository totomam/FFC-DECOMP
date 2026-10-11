#include "ffc/types.h"

extern void *func_0203b688(void *);
extern void *func_02056aec(void *);
extern void *func_02073b24(void *);
extern void func_02056bc0(void *object, void *node);

void *func_ov007_021b2728(void *a)
{
    void *r4;
    void *r6;
    uint8_t *p = (uint8_t *)a;

    r4 = func_0203b688(a);
    if (*(void **)(p + 0xb8) != 0) {
        r6 = func_02056aec(a);
        func_02056bc0(r4, func_02073b24(*(void **)(p + 0xb8)));
        func_02056bc0(r4, r6);
    }
    return r4;
}
