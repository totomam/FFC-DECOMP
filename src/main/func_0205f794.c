#include "ffc/types.h"

extern uint8_t data_020b10c4[];
extern void func_02056858(uint32_t);
extern void func_0209d06c(uint32_t, uint32_t, uint32_t, void *);
extern void func_0205ff30(uint32_t, uint32_t);
extern void func_02056844(void *);
extern void func_0205f750(void);

void *func_0205f794(void *self)
{
    uint32_t *s = (uint32_t *)self;
    uint32_t *o;

    s[0] = (uint32_t)data_020b10c4;
    o = (uint32_t *)s[10];
    if (o != 0) {
        uint32_t *vt = (uint32_t *)o[0];
        ((void (*)(void *))vt[1])(o);
    }
    func_02056858(s[12]);
    func_0209d06c(s[11], 0x28, 8, (void *)func_0205f750);
    {
        uint32_t *a = (uint32_t *)s[5];
        uint32_t *b = (uint32_t *)a[6];
        func_0205ff30(b[5], s[9]);
    }
    func_02056844(self);
    return self;
}
