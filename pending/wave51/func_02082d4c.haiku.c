#include "ffc/types.h"

void func_02082d4c(uint32_t r0) {
    if (r0 & 1) {
        *(volatile uint8_t *)0x4000240 = 0x80;
    }
    if (r0 & 2) {
        *(volatile uint8_t *)0x4000241 = 0x80;
    }
    if (r0 & 4) {
        *(volatile uint8_t *)0x4000242 = 0x80;
    }
    if (r0 & 8) {
        *(volatile uint8_t *)0x4000243 = 0x80;
    }
    if (r0 & 0x10) {
        *(volatile uint8_t *)0x4000244 = 0x80;
    }
    if (r0 & 0x20) {
        *(volatile uint8_t *)0x4000245 = 0x80;
    }
    if (r0 & 0x40) {
        *(volatile uint8_t *)0x4000246 = 0x80;
    }
    if (r0 & 0x80) {
        *(volatile uint8_t *)0x4000248 = 0x80;
    }
    if (r0 & 0x100) {
        *(volatile uint8_t *)0x4000249 = 0x80;
    }
}
