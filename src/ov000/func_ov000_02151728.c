#include "ffc/types.h"
extern int func_0208db58(void *p);
extern int *data_ov000_0216e268;
int func_ov000_02151728(void *p)
{
    int r;
    if (p == 0) return -1;
    data_ov000_0216e268[0x1a90/4] = 2;
    r = func_0208db58(p);
    if (r == 2) return 0;
    return r;
}
