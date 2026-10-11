#include "ffc/types.h"
extern uint8_t data_021434e4[];
void func_0208ae70(uint32_t mask) {
    while (*(volatile uint16_t *)(data_021434e4 + 0x3a) & mask) {}
}
