#include "ffc/types.h"

extern int func_ov000_0215aab4(void *p);
extern int func_ov001_021761d8(void *a, void *b);
extern void **data_ov000_02170060;

int func_ov000_0215aad0(void *p)
{
    if (func_ov000_0215aab4(p) == 0) {
        return 0;
    }
    if (func_ov001_021761d8(*data_ov000_02170060, p) == 0) {
        return 1;
    }
    return 0;
}
