#include "ffc/types.h"

extern int func_ov000_02148cbc(void *p, uint32_t size, uint32_t arg);

int func_ov000_021492d4(void *base)
{
    int ok = 1;
    int flag = 1;
    int i;
    for (i = 0; i < 3; i++) {
        int r = 0;
        if (flag) {
            if (func_ov000_02148cbc((uint8_t *)base + (i << 9), 512, i + 17) >= 0) {
                r = ok;
            }
        }
        flag = r;
    }
    return flag;
}
