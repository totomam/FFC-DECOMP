#include "ffc/types.h"

extern void func_0209cf5c(void *p, int a, int b, void *c, void *d);
extern void func_0203c40c(void);
extern void func_0203c3fc(void);

void *func_02033e58(uint32_t *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    func_0209cf5c(p + 5, 2, 8, func_0203c3fc, func_0203c40c);
    return p;
}
