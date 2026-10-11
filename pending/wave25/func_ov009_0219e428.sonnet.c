#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint8_t data_ov009_021bd120[];

int32_t func_ov009_0219e428(int32_t x)
{
    if (data_ov009_021bd120[0] != 0 || data_ov009_021bd120[1] != 0) {
        return (int32_t)func_020817c8(1 << 12, x << 12) >> 12;
    }
    return (int32_t)func_020817c8(0x548, x << 12) >> 12;
}
