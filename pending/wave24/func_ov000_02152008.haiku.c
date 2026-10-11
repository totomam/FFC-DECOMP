#include "ffc/types.h"

extern int32_t data_ov000_02169a34;
extern int32_t func_ov000_0214e848(void);
extern int32_t func_ov000_0214f140(void);

int32_t func_ov000_02152008(void)
{
    int32_t r;

    if (data_ov000_02169a34 == 0) {
        return 1;
    }
    if (func_ov000_0214e848() != 0) {
        return 0;
    }
    r = func_ov000_0214f140();
    if (r == 0 || r == -39) {
        return 1;
    }
    return 0;
}
