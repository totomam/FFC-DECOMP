#include "ffc/types.h"

extern int32_t func_ov000_02159000(void);
extern uint32_t data_ov007_021c9bac[];

int32_t func_ov007_021bf468(void)
{
    if (func_ov000_02159000() != 0) {
        return 4;
    }
    return data_ov007_021c9bac[2];
}
