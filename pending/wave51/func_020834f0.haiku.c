#include "ffc/types.h"

extern void func_02088cd8(uint32_t a, uint32_t b);
extern uint16_t data_0214136e;

uint32_t func_020834f0(volatile uint16_t *p) {
    uint32_t v = *p;
    *p = 0;
    if (v & 1) *(volatile uint8_t *)0x4000240 = 0;
    if (v & 2) *(volatile uint8_t *)0x4000241 = 0;
    if (v & 4) *(volatile uint8_t *)0x4000242 = 0;
    if (v & 8) *(volatile uint8_t *)0x4000243 = 0;
    if (v & 0x10) *(volatile uint8_t *)0x4000244 = 0;
    if (v & 0x20) *(volatile uint8_t *)0x4000245 = 0;
    if (v & 0x40) *(volatile uint8_t *)0x4000246 = 0;
    if (v & 0x80) *(volatile uint8_t *)0x4000248 = 0;
    if (v & 0x100) *(volatile uint8_t *)0x4000249 = 0;
    func_02088cd8((uint16_t)v, data_0214136e);
    return v;
}
