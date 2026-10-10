#include "ffc/types.h"

extern uint8_t data_ov006_021ba180[];

void func_ov006_0219c83c(uint16_t v) {
    *(uint16_t *)(data_ov006_021ba180 + 8) = v;
}
