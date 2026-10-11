#include "ffc/types.h"

extern int func_02089010(void *p, int x);
extern void func_02088714(void *p, int a, int b, void *c, void *d);
extern void func_0207c96c(void *p);

void func_0207c96c(void *p)
{
    uint8_t *o = (uint8_t *)p;
    int (*f)(int) = *(int (**)(int))(o + 0x34);
    if (f(*(int *)(o + 0x38)) != 0) {
        func_02089010(p, 1);
        return;
    }
    func_02088714(o + 0xc, 0xc0, 0xc0 + 0x47, (void *)func_0207c96c, p);
}
