#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_02081210(uint32_t first, int32_t second);

void func_0205730c(int32_t *self, int32_t idx)
{
    int32_t r4;
    int32_t r6;
    int32_t r0;
    int32_t r2;

    if (idx != self[7] - 1) {
        r4 = (self[7] - 1) << 12;
        r0 = (int32_t)func_020817c8(0x1000, idx << 12);
        r2 = (int32_t)func_02081210((uint32_t)r0, r4);
        r0 = self[18] - self[16];
        r0 = (int32_t)func_020817c8(r0, r2);
        r4 = self[16] + r0;
        r6 = (self[7] - 1) << 12;
        r0 = (int32_t)func_020817c8(0x1000, idx << 12);
        r2 = (int32_t)func_02081210((uint32_t)r0, r6);
        r0 = self[17] - self[15];
        r0 = (int32_t)func_020817c8(r0, r2);
        self[13] = self[15] + r0;
        self[14] = r4;
    } else {
        self[13] = self[17];
        self[14] = self[18];
    }
}
