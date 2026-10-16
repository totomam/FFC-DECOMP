#include "ffc/types.h"
extern int func_ov000_02168768(void *p);
extern void *func_ov000_0216876c(void *p, int i);
extern int func_ov001_02185f1c(void *p);
extern int func_ov001_02185f38(void *p);
int func_ov001_02186c70(void *self, int a, short b)
{
    void *o;
    int i;
    int n = func_ov000_02168768(*(void **)((char *)self + 4));
    for (i = 0; i < n; i++) {
        o = *(void **)func_ov000_0216876c(*(void **)((char *)self + 4), i);
        if (a == func_ov001_02185f1c(o) && b == func_ov001_02185f38(o))
            return i;
    }
    return -1;
}
