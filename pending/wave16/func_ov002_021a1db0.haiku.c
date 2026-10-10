#include "ffc/types.h"

extern int func_ov002_021a198c(void *p, int v);

int func_ov002_021a1db0(void *p, int v)
{
    if (v == 0) {
        if (func_ov002_021a198c(p, 7) != 0) {
            return 0;
        }
    }
    return 1;
}
