#include "ffc/types.h"

extern uint16_t func_02088a2c(void *object);
extern uint32_t data_020a5d6c[];

uint32_t func_02087434(void *object) {
    return data_020a5d6c[func_02088a2c(object)];
}
