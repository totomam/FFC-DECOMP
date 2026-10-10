#include "ffc/types.h"

extern uint8_t data_0213e6c4[];

void func_02079838(int32_t idx, uint8_t val) {
    data_0213e6c4[idx * 36] = val;
}
