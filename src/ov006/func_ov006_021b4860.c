#include "ffc/types.h"

void func_ov006_021b4860(int32_t a, uint32_t idx, uint32_t b, int32_t c) {
    volatile uint16_t *p;
    uint32_t v;

    switch (idx) {
    case 0:
        if (a == 1) {
            v = *(volatile uint16_t *)0x4001048;
            v = (v & ~0x3f) | b;
            if (c != 0) {
                v |= 0x20;
            }
            *(volatile uint16_t *)0x4001048 = v;
        } else {
            v = *(volatile uint16_t *)0x4000048;
            v = (v & ~0x3f) | b;
            if (c != 0) {
                v |= 0x20;
            }
            *(volatile uint16_t *)0x4000048 = v;
        }
        break;
    case 1:
        if (a == 1) {
            p = (volatile uint16_t *)0x4001048;
            v = *p;
            v &= 0xffffc0ff;
            v |= b << 8;
            if (c != 0) {
                v |= (uint32_t)p >> 13;
            }
            *(volatile uint16_t *)0x4001048 = v;
        } else {
            p = (volatile uint16_t *)0x4000048;
            v = *p;
            v &= 0xffffc0ff;
            v |= b << 8;
            if (c != 0) {
                v |= (uint32_t)p >> 13;
            }
            *(volatile uint16_t *)0x4000048 = v;
        }
        break;
    case 2:
        if (a == 1) {
            p = (volatile uint16_t *)0x400104a;
            v = *p;
            v &= 0xffffc0ff;
            v |= b << 8;
            if (c != 0) {
                v |= (uint32_t)p >> 13;
            }
            *(volatile uint16_t *)0x400104a = v;
        } else {
            p = (volatile uint16_t *)0x400004a;
            v = *p;
            v &= 0xffffc0ff;
            v |= b << 8;
            if (c != 0) {
                v |= (uint32_t)p >> 13;
            }
            *(volatile uint16_t *)0x400004a = v;
        }
        break;
    case 3:
        if (a == 1) {
            v = *(volatile uint16_t *)0x400104a;
            v = (v & ~0x3f) | b;
            if (c != 0) {
                v |= 0x20;
            }
            *(volatile uint16_t *)0x400104a = v;
        } else {
            v = *(volatile uint16_t *)0x400004a;
            v = (v & ~0x3f) | b;
            if (c != 0) {
                v |= 0x20;
            }
            *(volatile uint16_t *)0x400004a = v;
        }
        break;
    }
}
