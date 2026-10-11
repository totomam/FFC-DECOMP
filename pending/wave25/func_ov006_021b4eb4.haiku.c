#include "ffc/types.h"

extern int32_t func_ov006_021b4d94(uint16_t *p);

int32_t func_ov006_021b4eb4(uint16_t *p)
{
    uint16_t buf[4];
    uint16_t a, b, c, d;
    int32_t flag;

    flag = (int32_t)(*(uint16_t *)0x2ffffa8 & 0x8000) >> 15;
    if (flag) {
        return 0;
    }
    a = p[0];
    c = p[2];
    b = p[1];
    d = p[3];
    buf[0] = a;
    buf[1] = b;
    buf[2] = a + c;
    buf[3] = b + d;
    return func_ov006_021b4d94(buf);
}
