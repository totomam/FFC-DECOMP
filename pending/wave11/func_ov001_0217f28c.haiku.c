#include "ffc/types.h"

extern uint32_t data_ov001_02194c28;
extern uint32_t data_ov001_02194c30;

void *func_ov001_0217f28c(uint32_t a, uint32_t b) {
    ((uint32_t *)&data_ov001_02194c28)[2] = a;
    ((uint32_t *)&data_ov001_02194c28)[3] = b;
    return &data_ov001_02194c30;
}
