#include "ffc/types.h"

void func_02081e6c(int32_t a, uint32_t b, uint32_t c, uint16_t d) {
    if (a != 0) {
        *(volatile uint16_t *)0x400035c = d;
        { uint32_t v = *(volatile uint16_t *)0x4000060 & 0xffffc0bf; *(volatile uint16_t *)0x4000060 = (uint16_t)(v | (((c << 8) | (b << 6)) | 0x80)); }
    } else {
        *(volatile uint16_t *)0x4000060 &= 0xcf7f;
    }
}
