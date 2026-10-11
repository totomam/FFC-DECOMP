#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6a8;

int func_ov006_021a3778(void) {
    uint8_t *p = data_ov006_021bc6a8;
    if (p == 0) {
        return 1;
    }
    if (p[0x19] == 0) {
        return 1;
    }
    return 0;
}
