#include "ffc/types.h"

extern int32_t data_ov000_02170964[];

int func_ov000_02163c48(void)
{
    if (data_ov000_02170964[1] >= (6 << 12)) {
        return 0;
    }
    return 1;
}
