/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_ov014_02155b00[];

void func_ov014_02146964(uint32_t a, uint32_t b)
{
    data_ov014_02155b00[6] = a;
    data_ov014_02155b00[5] = b & ~3;
    data_ov014_02155b00[2] = 0;
}
