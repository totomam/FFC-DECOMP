#include "ffc/types.h"

extern uint16_t data_02141390;
extern void func_02082d4c(uint32_t x);

void func_02083354(uint32_t x) {
    data_02141390 = (uint16_t)(data_02141390 | (uint16_t)x);
    func_02082d4c(x);
}
