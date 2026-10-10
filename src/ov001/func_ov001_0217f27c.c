#include "ffc/types.h"

extern uint32_t data_ov001_02194c28;
extern uint32_t data_ov001_02194c2c;

uint32_t *func_ov001_0217f27c(uint32_t x) {
    ((uint32_t *)&data_ov001_02194c28)[1] = x;
    return &data_ov001_02194c2c;
}
