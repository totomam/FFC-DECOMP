#include "ffc/types.h"

extern int func_ov000_0216591c(void *p);
extern int func_ov000_02168bac(uint32_t v, void *fn, int *out);
extern int func_ov001_02182100(void);

int func_ov001_02182138(void *p)
{
    int x;
    x = func_ov000_0216591c(p);
    return func_ov000_02168bac(((uint32_t *)p)[3], (void *)func_ov001_02182100, &x) == 0;
}
