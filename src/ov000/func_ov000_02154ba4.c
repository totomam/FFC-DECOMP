#include "ffc/types.h"

extern int32_t func_ov000_0214e848(void);
extern int32_t func_ov000_0214f140(void);

int32_t func_ov000_02154ba4(void)
{
    if (func_ov000_0214e848() != 0) {
        return 11;
    }
    int32_t r = func_ov000_0214f140();
    if (r == 0 || r == (int32_t)~0x26) {
        return 9;
    }
    return 11;
}
