#include "ffc/types.h"
extern int *func_ov000_02165744(void);
extern int func_ov000_02165798(int *o);
uint32_t func_ov001_02182390(void)
{
    int i;
    int *p;
    uint32_t r = 0;
    p = func_ov000_02165744();
    if (p == 0) return r;
    for (i = 0;; i++) {
        int *o = ((int **)p[3])[i];
        if (o == 0) break;
        if (*o == 0x100007f) continue;
        r = *o;
        if (func_ov000_02165798(o) != 0) return r;
    }
    return r;
}
