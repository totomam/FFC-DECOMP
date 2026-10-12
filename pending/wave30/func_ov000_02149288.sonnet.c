#include "ffc/types.h"
extern int func_ov000_02148cbc(void *p, int a, int b);
int func_ov000_02149288(void *p0)
{
    int i; int ok = 1; int r = 0;
    uint8_t *p = (uint8_t *)p0;
    for (i = 0; i < 3; i++) {
        r = 0; if (ok) { r = func_ov000_02148cbc(p + (i << 8), 0x100, i) >= 0; }
        ok = r;
    }
    if (r != 0) {
        if (func_ov000_02148cbc(p + 0x300, 0x100, 3) >= 0) return 1;
    }
    return 0;
}
