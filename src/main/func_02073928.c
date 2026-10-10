#include "ffc/types.h"

extern uint32_t data_0213e1cc[];
extern uint32_t data_0213e188[];

void func_02073928(uint32_t idx, uint32_t val, uint32_t x) {
    if (val == 0) {
        data_0213e1cc[idx] = val;
    }
    {
        uint32_t *p = (uint32_t *)data_0213e188[6];
        p[7] = x;
    }
}
