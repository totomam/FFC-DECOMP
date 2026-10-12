#include "ffc/types.h"

extern uint16_t data_02141390;
extern void func_02082d4c(uint16_t v);

void func_0208340c(uint32_t x) {
    uint32_t v = (data_02141390 | *(uint16_t *)((uint8_t *)&data_02141390 + 0x16)) & ~x;
    data_02141390 = (uint16_t)v;
    *(uint16_t *)((uint8_t *)&data_02141390 + 0x16) = (uint16_t)x;
    if (x != 0) {
        if (x == 0x80) {
            volatile uint32_t *r = (volatile uint32_t *)0x04001000;
            *r = *r | (uint32_t)(0x04001000u << 18);
            *(volatile uint8_t *)0x04000248 = 0x82;
        }
    } else {
        volatile uint32_t *r = (volatile uint32_t *)0x04001000;
        *r = *r & 0xbfffffff;
    }
    func_02082d4c(data_02141390);
}
