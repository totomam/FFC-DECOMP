#include "ffc/types.h"

uint32_t func_02023658(uint32_t flags, uint32_t *q, uint32_t *p, int32_t idx)
{
    int32_t a = (int32_t)p[0];

    if (a <= 0x20052) {
        if (flags & 0xc) {
            uint32_t t = p[1];
            return (uint32_t)p + (t + p[2]) + ((uint32_t)(idx * p[9]) << 2);
        }
        return (uint32_t)p + (p[1] + p[2]);
    } else if (a <= 0x30000) {
        if (flags & 0xc) {
            uint32_t t = p[1];
            return (uint32_t)p + (t + p[2]) + ((uint32_t)(idx * p[9]) << 5);
        }
        return (uint32_t)p + (p[1] + p[2]);
    } else {
        if (flags & 0xc) {
            uint32_t t = p[1];
            return (uint32_t)p + (t + p[2]) + ((uint32_t)(idx * p[9]) << 5);
        }
        return q[1] + q[2] + q[3] + q[4] + (uint32_t)q;
    }
}
