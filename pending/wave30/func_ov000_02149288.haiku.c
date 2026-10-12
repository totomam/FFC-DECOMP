#include "ffc/types.h"

extern int func_ov000_02148cbc(void *p, int a, int b);

int func_ov000_02149288(void *p0)
{
    int i;
    int ok = 0;
    int prev = 1;
    uint8_t *p = (uint8_t *)p0;

    for (i = 0; i < 3; i++) {
        ok = i;
        if (prev != 0) {
            if (func_ov000_02148cbc(p + (i << 8), 0x100, i) >= 0) {
                ok = 1;
            }
        }
        prev = ok;
    }

    if (ok == 0) {
        return 0;
    }
    if (func_ov000_02148cbc(p + 0x300, 0x100, 3) < 0) {
        return 0;
    }
    return 1;
}
