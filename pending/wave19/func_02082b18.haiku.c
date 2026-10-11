#include "ffc/types.h"

extern uint32_t func_020834d0(void);
extern uint32_t data_02141370[];
extern uint8_t data_020a5ce4[];
extern uint8_t data_020a5ce6[];
extern uint8_t data_020a5ce8[];

void func_02082b18(void) {
    uint32_t idx = func_020834d0();
    uint32_t off;
    data_02141370[5] = idx;
    off = idx * 6;
    data_02141370[1] = (uint32_t)*(uint16_t *)(data_020a5ce4 + off) << 12;
    data_02141370[6] = (uint32_t)*(uint16_t *)(data_020a5ce6 + off) << 12;
    data_02141370[7] = (uint32_t)*(uint16_t *)(data_020a5ce8 + off) << 12;
}
