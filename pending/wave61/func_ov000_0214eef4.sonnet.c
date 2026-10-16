#include "ffc/types.h"
extern uint32_t func_ov000_0214e984(void *p);
static inline uint16_t sw16(uint32_t y)
{ uint16_t x = y;
    return (uint16_t)((uint8_t)(x >> 8) | ((x << 8) & 0xff00));
}
static inline uint32_t sw32(uint32_t a)
{
    return (uint8_t)(a >> 24) | ((a >> 8) & 0xff00) | ((a << 8) & 0xff0000) | ((a << 24) & 0xff000000);
}
int func_ov000_0214eef4(uint8_t *p, uint8_t *out)
{
    uint32_t addr;
    uint16_t port;
    if (p == 0) return -0x27;
    addr = func_ov000_0214e984(p);
    port = p ? *(uint16_t *)(p + 0xb0) : 0;
    if (addr == 0) port = 0;
    out[0] = 8;
    out[1] = 2;
    *(uint16_t *)(out + 2) = sw16(port);
    *(uint32_t *)(out + 4) = sw32(addr);
    return 0;
}
