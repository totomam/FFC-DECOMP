#include "ffc/types.h"

extern uint32_t data_ov006_021ba150;

int func_ov006_0219b4ec(void)
{
    int ret = 0;
    int b = 0;
    int a = 0;
    uint8_t *p = *(uint8_t **)((uint8_t *)&data_ov006_021ba150 + 0xc);
    uint16_t v;

    v = *(uint16_t *)(p + 0x528);
    if (v == 1) {
        if (p[0x50c] == 0) {
            a = 1;
        }
    }
    if (a) {
        if (*(uint16_t *)(p + 0x526) == 0) {
            b = 1;
        }
    }
    if (b) {
        if (*(uint16_t *)(p + 0x52a) != 0) {
            ret = 1;
        }
    }
    return ret;
}
