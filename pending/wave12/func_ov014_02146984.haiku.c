/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} S_ov014_5b00;

extern S_ov014_5b00 data_ov014_02155b00;

void func_ov014_02146984(uint32_t a, uint32_t b)
{
    data_ov014_02155b00.f10 = a;
    data_ov014_02155b00.f0c = b & ~3;
    data_ov014_02155b00.f04 = 0;
    data_ov014_02155b00.f00 = 0;
    data_ov014_02155b00.f1c = 0;
}
