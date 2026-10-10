#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint8_t data_ov006_021bb2dc[];

int func_ov006_021a351c(void *dst)
{
    func_02090380(dst, data_ov006_021bb2dc, 0xe8);
    return 1;
}
