#include "ffc/types.h"

extern void func_02056c4c(void *p);

void func_ov005_02198ab0(uint8_t *a)
{
    uint8_t *p = *(uint8_t **)(a + 0x12c);
    func_02056c4c(p + 0x14);
    {
        void *obj = *(void **)(p + 0x98);
        void **vt = *(void ***)obj;
        ((void (*)(void *, int, int))vt[14])(obj, 1, 0);
    }
}
