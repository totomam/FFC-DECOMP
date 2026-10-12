#include "ffc/types.h"

extern uint32_t func_ov001_0217f324(uint32_t a, uint32_t b);
extern uint32_t func_ov001_0217f30c(uint32_t h);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_021653d4(uint32_t size);
extern void func_ov000_021653f4(uint32_t p);
extern void func_02092878(uint32_t dst, uint32_t src);
extern void func_02092924(uint32_t dst, const uint8_t *src);
extern void func_ov001_0217f2c4(uint32_t h, uint32_t buf);

uint32_t func_ov001_0217f19c(uint32_t a, uint32_t b, const uint8_t *c)
{
    uint32_t h;
    uint32_t s;
    uint32_t len;
    uint32_t buf;

    h = func_ov001_0217f324(a, b);
    if (h == 0) {
        return 0;
    }
    s = func_ov001_0217f30c(h);
    len = func_02092864((const uint8_t *)s);
    len = len + func_02092864(c) + 1;
    buf = func_ov000_021653d4(len);
    func_02092878(buf, s);
    func_02092924(buf, c);
    func_ov001_0217f2c4(h, buf);
    func_ov000_021653f4(buf);
    return func_ov001_0217f30c(h);
}
