#include "ffc/types.h"
int func_02082268(void) {
    int bg = *(uint16_t*)0x4000008;
    uint32_t d = *(uint32_t*)0x4000000;
    int m = (bg & 0x3c) >> 2;
    int b = (d & 0x7000000) >> 24;
    return (m << 14) + ((b << 16) + 0x6000000);
}
