#include "ffc/types.h"

extern void func_02021338(uint32_t x);

void func_ov010_021bd2cc(uint8_t *p)
{
    void *a = *(void **)(p + 0x9c);
    void **vt = *(void ***)a;
    ((void (*)(void *, int, int))vt[0x38 / 4])(a, 4, 1);

    void *b = *(void **)(p + 0x98);
    void **vt2 = *(void ***)b;
    ((void (*)(void *))vt2[0x30 / 4])(b);

    func_02021338(0xb3);
}
