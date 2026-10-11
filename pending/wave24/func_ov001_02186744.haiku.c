#include "ffc/types.h"

extern uint32_t func_02165588(uint32_t);
extern void func_ov001_0218821c(void *, uint32_t, uint16_t, uint32_t, uint32_t);

void func_ov001_02186744(uint8_t *p0, uint32_t p1, int32_t p2, uint32_t p3, uint32_t p4)
{
    uint32_t r;
    uint16_t sw;

    r = func_02165588(p1);
    sw = (uint16_t)(((p2 >> 8) & 0xff) | ((p2 << 8) & 0xff00));
    func_ov001_0218821c(p0 + 0x60, r, sw, p3, p4);
}
