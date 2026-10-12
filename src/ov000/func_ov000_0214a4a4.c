#include "ffc/types.h"

extern void func_ov000_0214c434(void *obj);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov000_0214c46c(void *obj, const void *src, uint32_t n);
extern void func_ov000_0214c4ec(void *obj, void *buf);
extern void func_ov000_0214bd88(void *obj);
extern void func_ov000_0214bdb8(void *obj, const void *src, uint32_t n);
extern void func_ov000_0214be38(void *obj, const void *src);

void func_ov000_0214a4a4(void *p0, const uint8_t *p1, uint8_t *p2)
{
    uint8_t buf[0x14];
    uint8_t *obj = p2 + 0x348;
    uint32_t h;

    func_ov000_0214c434(obj);
    h = func_02092864(p1);
    func_ov000_0214c46c(obj, p1, h);
    func_ov000_0214c46c(obj, p2, 0x30);
    func_ov000_0214c46c(obj, p2 + 0x34, 0x40);
    func_ov000_0214c4ec(obj, buf);
    obj = p2 + 0x3fc;
    func_ov000_0214bd88(obj);
    func_ov000_0214bdb8(obj, p2, 0x30);
    func_ov000_0214bdb8(obj, buf, 0x14);
    func_ov000_0214be38(obj, p0);
}
