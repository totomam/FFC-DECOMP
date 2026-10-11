#include "ffc/types.h"

extern void *data_ov000_02170004;
extern void func_ov000_021569f0(void *p);

void func_ov000_0215820c(void)
{
    if (data_ov000_02170004 != 0) {
        func_ov000_021569f0((uint8_t *)data_ov000_02170004 + 8);
        ((void (*)(uint32_t, void *, uint32_t))((uint32_t *)data_ov000_02170004)[1])(0, data_ov000_02170004, 0);
        data_ov000_02170004 = 0;
    }
}
