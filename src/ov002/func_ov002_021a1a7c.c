#include "ffc/types.h"

extern int func_ov002_021a18bc(void *p);
extern void func_ov002_021a18c4(void *p, int x);
extern int func_ov002_021aa780(void);

int func_ov002_021a1a7c(void *p)
{
    int r = 0;
    if (func_ov002_021a18bc(p) == 0) {
        return 3;
    }
    func_ov002_021a18c4(p, 0);
    switch (func_ov002_021aa780()) {
    case 0:
    case 1:
    case 2:
        r = 0;
        break;
    case 3:
    case 4:
    case 5:
        r = 1;
        break;
    default:
        r = 3;
        break;
    }
    return r;
}
