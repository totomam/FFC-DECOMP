#include "ffc/types.h"

extern void func_02056bf4(void *p);

void func_ov002_0219c874(uint8_t *a, void *b)
{
    func_02056bf4(a + 0x48);
    if (b != 0 && b != 0) {
        void *o = b;
        uint32_t *vt = *(uint32_t **)o;
        ((void (*)(void *))vt[1])(o);
    }
}
