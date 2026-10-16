#include "ffc/types.h"
extern int func_ov007_021c08a0(int a, int b);
int func_ov007_021c0bc4(int *p)
{
    int *q = (int *)p[2];
    if (q[0] == 0) return 4;
    if (q[3] <= 0) return 6;
    if (q[2] != 0) return func_ov007_021c08a0(q[2], q[3]);
    return 5;
}
