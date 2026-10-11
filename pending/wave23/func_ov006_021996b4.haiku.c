#include "ffc/types.h"

extern int32_t func_ov006_0219a38c(int32_t x);
extern uint8_t *data_ov006_021ba160;

int32_t func_ov006_021996b4(int32_t a)
{
    if (data_ov006_021ba160 != 0 && func_ov006_0219a38c(a) != 0 &&
        *(int32_t *)(data_ov006_021ba160 + ((a - 1) << 2) + 0x14e8) == 7) {
        return 1;
    }
    return 0;
}
