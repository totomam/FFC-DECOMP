#include "ffc/types.h"

extern int32_t func_ov002_0219c5d8(void *p, int32_t idx);

int32_t func_ov002_0219c654(void *p, int32_t mode)
{
    int32_t count = 0;
    int32_t i;
    for (i = 0; i < 6; i++) {
        int32_t ok;
        switch (mode) {
        case 0:
            ok = (i == 0) ? 1 : (((uint32_t)(i - 3) <= 1) ? 1 : 0);
            break;
        case 1:
            ok = (i == 1) ? 1 : ((i == 2) ? 1 : ((i == 5) ? 1 : 0));
            break;
        default:
            ok = 1;
            break;
        }
        if (ok) {
            if (func_ov002_0219c5d8(p, i)) {
                count++;
            }
        }
    }
    return count;
}
