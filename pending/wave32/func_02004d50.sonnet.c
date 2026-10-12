/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t data_02fe0000[];
static inline uint8_t *sub(uint8_t *p, uint32_t n) { return p - n; }
void func_02004d50(uint32_t *src)
{
    uint32_t *dst;
    uint32_t v;
    if (src == 0) return;
    dst = (uint32_t *)((uint8_t *)data_02fe0000 + 0x4000);
    dst = (uint32_t *)((uint8_t *)dst - 0x40 - 0x40);
    dst = (uint32_t *)sub((uint8_t *)dst, 0x800);
    dst++;
    for (; *dst != 0; dst++) ;
    do { v = *src++; *dst++ = v; } while (v != 0);
}
