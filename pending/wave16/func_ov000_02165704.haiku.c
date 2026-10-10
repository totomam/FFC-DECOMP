#include "ffc/types.h"

extern int func_ov000_021655ac(int a, int *b, int c, int d);

int func_ov000_02165704(int a)
{
    int out = 0;
    int r = func_ov000_021655ac(a, &out, 0, 0);
    if (r == 1) {
        return out;
    }
    return 0;
}
