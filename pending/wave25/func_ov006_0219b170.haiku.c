#include "ffc/types.h"

extern uint8_t data_ov006_021ba0c8[];
extern uint8_t data_ov006_021ba0a8[];

void func_ov006_0219b170(void) {
    if (data_ov006_021ba0c8[4] != 2) {
        return;
    }
    uint8_t *p = *(uint8_t **)(data_ov006_021ba0a8 + 0x1c);
    if (p[0x4b2] == 0) {
        data_ov006_021ba0c8[8] = 9;
        *(uint8_t **)(data_ov006_021ba0a8 + 0x20) = p;
    } else {
        data_ov006_021ba0c8[8] = 4;
        *(uint8_t **)(data_ov006_021ba0a8 + 0x20) = p + 0x220;
    }
    data_ov006_021ba0c8[4] = 3;
}
