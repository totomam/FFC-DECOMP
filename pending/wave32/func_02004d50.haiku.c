/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_02fe0000[];

void func_02004d50(uint32_t *src)
{
    uint32_t *dst;
    uint32_t v;

    if (src == 0) {
        return;
    }
    dst = (uint32_t *)((uint8_t *)data_02fe0000 + 0x3784);
    while (*dst != 0) {
        dst++;
    }
    do {
        v = *src++;
        *dst++ = v;
    } while (v != 0);
}
