#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_020655dc(void *p, int a, int b);
extern void func_02056bc0(void *object, void *node);

void *func_ov005_02195df0(uint8_t *a0)
{
    void *r4 = func_0203b6fc();
    void *n = func_020655dc(*(void **)(a0 + 0x24), 1, 1);
    func_02056bc0(r4, n);
    if (*(int *)(a0 + 0x44) != 2) {
        n = func_020655dc(*(void **)(a0 + 0x28), 1, 1);
        func_02056bc0(r4, n);
    }
    return r4;
}
