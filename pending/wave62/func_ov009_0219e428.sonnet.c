#include "ffc/types.h"
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint8_t data_ov009_021bd120[2];
int32_t func_ov009_0219e428(int32_t x) {
    int32_t buf[12];
    int32_t r;
    if (data_ov009_021bd120[0] != 0 || data_ov009_021bd120[1] != 0) {
        r = func_020817c8(0x1000, x << 12);
        return r >> 12;
    }
    buf[0] = buf[1];
    r = func_020817c8(0x548, x << 12);
    return r >> 12;
}
