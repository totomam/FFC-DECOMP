#include "ffc/types.h"

extern int func_ov000_0214c5f0(uint16_t *p, int n);

int func_ov000_0214c608(uint16_t *p, int n)
{
    if (p[n - 1] & 0x8000) {
        return -1;
    }
    if (func_ov000_0214c5f0(p, n)) {
        return 1;
    }
    return 0;
}
