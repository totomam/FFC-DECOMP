#include "ffc/types.h"

extern int32_t func_ov006_021b4d94(uint16_t *p);

int32_t func_ov006_021b4eb4(uint16_t *p)
{
    uint16_t buf[4];

    if ((int32_t)(*(uint16_t *)0x2ffffa8 & 0x8000) >> 15) {
        return 0;
    }
    {
    uint16_t a = p[0], c = p[2], b = p[1];
    uint16_t *q = buf;
    q[0] = a;
    q[1] = b;
    q[2] = a + c;
    q[3] = p[3] + b;
    }
    return func_ov006_021b4d94(buf);
}
