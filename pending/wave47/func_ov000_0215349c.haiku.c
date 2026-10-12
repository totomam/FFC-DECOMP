#include "ffc/types.h"

int func_ov000_0215349c(uint8_t *p)
{
    uint32_t v;
    uint8_t k;
    int32_t q;

    v = p[0x22];
    if (v == 0) {
        v = p[0x15];
    }
    k = p[0x16];
    if (k < 10) {
        uint8_t t = p[0x14];
        if (t == 3) {
            return (int)(0xffff3864 - (uint8_t)v);
        } else if (t == 4) {
            return (int)(0xffff3800 - (uint8_t)v);
        }
        return (int)(0xffff379c - (uint8_t)v);
    }
    if (k < 13) {
        return (int)(0xffff34e0 - (uint8_t)v);
    }
    q = *(int32_t *)(p + 0x10);
    if (q == 0) {
        return (int)(0xffff3cb0 - (uint8_t)v);
    }
    if (((p[0xb] >> 4) & 0xf) == 1) {
        return (int)(0xffff3224 - (uint8_t)v);
    }
    if (q == -1) {
        return (int)(0xffff347c - (uint8_t)v);
    }
    if (q == -2) {
        return (int)(0xffff3418 - (uint8_t)v);
    }
    if (q == -3) {
        return (int)(0xffff33b4 - (uint8_t)v);
    }
    if (q == -4) {
        return (int)(0xffff30f8 - (uint8_t)v);
    }
    if (q == -5) {
        return (int)(0xffff3094 - (uint8_t)v);
    }
    if (q == -6) {
        return (int)(0xffff3030 - (uint8_t)v);
    }
    return q;
}
