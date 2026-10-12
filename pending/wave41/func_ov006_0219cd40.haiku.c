#include "ffc/types.h"

uint8_t *func_ov006_0219cd40(uint8_t *p, uint8_t *out)
{
    uint8_t t = *p;
    uint8_t *q = out;
    q = q + 1;
    *out = t;
    switch (t) {
    case 1:
    case 2:
    case 3:
        break;
    case 4:
        {
            uint16_t a = *(uint16_t *)(p + 2);
            uint16_t b = *(uint16_t *)(p + 4);
            q[0] = (uint8_t)a;
            q[1] = (uint8_t)((a & 0xff00) >> 8);
            q[2] = (uint8_t)b;
            q[3] = (uint8_t)((b & 0xff00) >> 8);
            q += 4;
        }
        break;
    case 5:
    case 6:
        break;
    default:
        return 0;
    }
    return q;
}
