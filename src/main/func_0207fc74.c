#include "ffc/types.h"

extern int func_0207d8ec(void *a, int b, int c, int d, void *e, int f, int g);
extern void func_0207fc5c(void);
extern void *data_02141300;

int func_0207fc74(int p0, int p1, int p2, int p3)
{
    int flag = 1;
    func_0207d8ec(data_02141300, p2, p1, p3, (void *)func_0207fc5c, p0, flag);
    flag += 255;
    return flag;
}
