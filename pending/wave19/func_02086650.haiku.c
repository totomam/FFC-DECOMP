#include "ffc/types.h"

extern uint32_t data_02141458;
extern uint32_t data_02141460;
extern uint32_t data_0214145c;
extern uint32_t func_020866dc(uint32_t x);

void func_02086650(uint32_t idx, uint32_t r1, uint32_t r2) {
    uint32_t bit = 1u << (idx + 8);
    uint32_t off = idx * 12;
    *(uint32_t *)((uint8_t *)&data_02141458 + off) = r1;
    *(uint32_t *)((uint8_t *)&data_02141460 + off) = r2;
    uint32_t r = func_020866dc(bit);
    *(uint32_t *)((uint8_t *)&data_0214145c + off) = bit & r;
}
