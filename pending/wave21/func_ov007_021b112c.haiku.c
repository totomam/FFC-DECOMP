#include "ffc/types.h"

extern int func_ov000_0215c188(void *a, void *b, int c);
extern int func_0208f68c(int x);
extern char data_ov007_021c5c7c[];

int func_ov007_021b112c(void *p0, char *p1)
{
    int r;
    int v;
    r = func_ov000_0215c188(p0, data_ov007_021c5c7c, 10);
    v = *(int *)(p1 + 0xc0);
    r = func_0208f68c(v - r);
    r = 0x270f - r;
    if (r < 1) {
        r = 1;
    }
    return r;
}
