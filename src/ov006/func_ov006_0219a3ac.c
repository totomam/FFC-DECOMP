#include "ffc/types.h"

extern uint32_t func_0207ea64(void);
extern uint32_t func_0207eab0(void *object, void *buf, uint32_t size);
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);

uint32_t func_ov006_0219a3ac(void *p)
{
    uint8_t buf[0x60];
    uint8_t *r4 = 0;
    uint32_t r5 = 0;

    if (p != 0) {
        uint32_t t = func_0207ea64();
        if (func_0207eab0(p, buf, 0x60) >= 0x60) {
            r4 = buf;
        }
        func_0207ea98(p, t, 0);
    } else {
        r4 = (uint8_t *)0x2fffe00;
    }

    if (r4 != 0) {
        r5 = *(uint32_t *)(r4 + 0x2c) + (0x9a << 2) + *(uint32_t *)(r4 + 0x3c);
        if (r5 < 0x10000) {
            r5 = 0x10000;
        }
    }
    return r5;
}
