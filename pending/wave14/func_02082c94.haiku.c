#include "ffc/types.h"

extern int32_t func_020834e0(void);
extern uint32_t data_02141370[];
extern uint16_t data_020a5cd4[];

uint32_t func_02082c94(void) {
    int32_t v = func_020834e0();
    data_02141370[3] = (uint32_t)v;
    return data_02141370[2] = (uint32_t)data_020a5cd4[v >> 4] << 12;
}
