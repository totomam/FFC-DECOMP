/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t p0;
    uint32_t p4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
} G;

extern G data_ov014_02155b00;
extern uint8_t data_ov014_0214ef0c[];
extern void func_02084a58(void *a, uint32_t b, uint32_t c);

uint32_t func_ov014_021469ac(void)
{
    if (data_ov014_02155b00.f8 == 0) {
        if (data_ov014_02155b00.f14 >= 0x659c) {
            data_ov014_02155b00.f8 = data_ov014_02155b00.f18;
            func_02084a58(data_ov014_0214ef0c, data_ov014_02155b00.f18, 0x659c);
            data_ov014_02155b00.f18 += 0x659c;
            data_ov014_02155b00.f14 -= 0x659c;
        } else {
            return (uint32_t)data_ov014_0214ef0c;
        }
    }
    return data_ov014_02155b00.f8;
}
