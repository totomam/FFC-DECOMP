#include "ffc/types.h"

typedef struct {
    uint32_t pad[3];
    uint8_t *p;
} S_ov006;

extern S_ov006 data_ov006_021ba150;

uint32_t func_ov006_0219c980(void)
{
    if (data_ov006_021ba150.p[0x50d] == 1) {
        return 1;
    }
    return 0;
}
