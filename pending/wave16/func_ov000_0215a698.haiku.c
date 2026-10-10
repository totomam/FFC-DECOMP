#include "ffc/types.h"

extern void func_ov000_02155ffc(void);
extern uint32_t *data_ov000_02170060;

void func_ov000_0215a698(void)
{
    if (data_ov000_02170060) {
        func_ov000_02155ffc();
        data_ov000_02170060[1] = 0;
        data_ov000_02170060[12] = 0;
    }
}
