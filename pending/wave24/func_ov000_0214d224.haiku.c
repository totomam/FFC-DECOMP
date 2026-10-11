#include "ffc/types.h"

extern int func_020874ac(int a, void *p, int flag);
extern int func_ov000_0214d1fc(void *p);

int func_ov000_0214d224(int a, int8_t *p)
{
    int flag;
    int r;

    if (p == 0 || (p[13] & 1)) {
        flag = 1;
    } else {
        flag = 0;
    }

    r = func_020874ac(a, p, flag);
    if (r == 0) {
        func_ov000_0214d1fc(p);
    }
    if (r != 0) {
        return 0;
    }
    return ~0x29;
}
