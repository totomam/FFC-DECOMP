#include "ffc/types.h"

extern uint32_t func_02086b04(void *buf, uint32_t size, void *data, uint32_t x);
extern uint32_t func_02086b20(void *object, uint32_t first, uint32_t second, uint32_t third);
extern uint8_t data_ov007_021c8834[];

uint32_t func_ov007_021bf91c(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint8_t buf[0x100];
    uint32_t *p;
    uint32_t n;
    n = func_02086b04(buf, 0x100, data_ov007_021c8834, a);
    p = (uint32_t *)((uint32_t)&b & ~3u);
    return func_02086b20(buf + n, 0x100 - n, b, (uint32_t)(p + 1));
}
