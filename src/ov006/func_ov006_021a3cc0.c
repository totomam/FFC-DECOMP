#include "ffc/types.h"

extern uint16_t func_ov006_021a6524(void *object);
extern uint32_t data_ov006_021b809c[];

uint32_t func_ov006_021a3cc0(void *object) {
    return data_ov006_021b809c[func_ov006_021a6524(object)];
}
