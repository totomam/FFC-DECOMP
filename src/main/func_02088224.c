#include "ffc/types.h"

extern uint16_t data_02141854;

void func_02088224(uint32_t n) {
    data_02141854 |= (uint16_t)(1u << n);
}
