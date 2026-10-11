#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];

void func_ov006_0219ba9c(void *a)
{
    uint16_t *p = (uint16_t *)a;
    if (p[1] == 0) {
        switch (p[2]) {
        case 7:
        case 9:
        case 0x19:
        case 0x1a:
            break;
        case 0x15: {
            uint8_t *obj = *(uint8_t **)(data_ov006_021ba150 + 0xc);
            void (*fn)(int) = *(void (**)(int))(obj + 0x51c);
            fn(9);
            break;
        }
        default:
            break;
        }
    }
}
