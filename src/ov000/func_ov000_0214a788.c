#include "ffc/types.h"

extern void func_ov000_0214c46c(void *dst, const void *src, uint32_t n);
extern void func_ov000_0214c4ec(void *s, void *out);
extern void func_ov000_0214c434(void *s);
extern void *func_02084b2c(void *dst, int val, uint32_t n);
extern uint8_t data_ov000_02169864[];
extern uint8_t data_ov000_0216986c[];

void func_ov000_0214a788(uint8_t *p, uint8_t *out, uint32_t f)
{
    uint8_t buf[0x28];
    uint8_t *s = p + 0x2EC;

    if (p[0x454] ^ f) {
        func_ov000_0214c46c(p + 0x2EC, data_ov000_02169864, 4);
    } else {
        func_ov000_0214c46c(p + 0x2EC, data_ov000_0216986c, 4);
    }
    func_ov000_0214c46c(s, p, 0x30);
    func_02084b2c(buf, 0x36, 0x28);
    func_ov000_0214c46c(s, buf, 0x28);
    func_ov000_0214c4ec(s, out);
    func_ov000_0214c434(s);
    func_ov000_0214c46c(s, p, 0x30);
    func_02084b2c(buf, 0x5c, 0x28);
    func_ov000_0214c46c(s, buf, 0x28);
    func_ov000_0214c46c(s, out, 0x14);
    func_ov000_0214c4ec(s, out);
}
