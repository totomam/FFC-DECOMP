#include "ffc/types.h"

extern int32_t func_ov006_021a1d04(uint32_t *p);
extern uint32_t data_ov006_021b7448[];
extern uint32_t data_ov006_021b5c48[];
extern uint32_t data_ov006_021b5848[];
extern uint32_t data_ov006_021b7848[];
extern uint32_t data_ov006_021b7c48[];

int32_t func_ov006_021a1fbc(uint32_t *s)
{
    int32_t n = func_ov006_021a1d04(s);
    int32_t r0 = 0;
    int32_t r6 = n * 4;
    int32_t i;
    uint32_t *p;

    if (r6 > 0) {
        uint32_t *a = s;
        uint32_t *b = s + 4 * n;
        do {
            uint32_t t;
            t = a[0]; a[0] = b[0]; b[0] = t;
            t = a[1]; a[1] = b[1]; b[1] = t;
            t = a[2]; a[2] = b[2]; b[2] = t;
            t = a[3]; a[3] = b[3]; b[3] = t;
            a += 4;
            b -= 4;
            r0 += 4;
            r6 -= 4;
        } while (r0 < r6);
    }

    p = s;
    for (i = 1; i < n; i++) {
        uint32_t w;
        p += 4;
        w = p[0];
        p[0] = data_ov006_021b7848[data_ov006_021b7448[w >> 24] & 0xff]
             ^ data_ov006_021b7c48[data_ov006_021b7448[(w >> 16) & 0xff] & 0xff]
             ^ data_ov006_021b5848[data_ov006_021b7448[(w >> 8) & 0xff] & 0xff]
             ^ data_ov006_021b5c48[data_ov006_021b7448[w & 0xff] & 0xff];
        w = p[1];
        p[1] = data_ov006_021b7848[data_ov006_021b7448[w >> 24] & 0xff]
             ^ data_ov006_021b7c48[data_ov006_021b7448[(w >> 16) & 0xff] & 0xff]
             ^ data_ov006_021b5848[data_ov006_021b7448[(w >> 8) & 0xff] & 0xff]
             ^ data_ov006_021b5c48[data_ov006_021b7448[w & 0xff] & 0xff];
        w = p[2];
        p[2] = data_ov006_021b7848[data_ov006_021b7448[w >> 24] & 0xff]
             ^ data_ov006_021b7c48[data_ov006_021b7448[(w >> 16) & 0xff] & 0xff]
             ^ data_ov006_021b5848[data_ov006_021b7448[(w >> 8) & 0xff] & 0xff]
             ^ data_ov006_021b5c48[data_ov006_021b7448[w & 0xff] & 0xff];
        w = p[3];
        p[3] = data_ov006_021b7848[data_ov006_021b7448[w >> 24] & 0xff]
             ^ data_ov006_021b7c48[data_ov006_021b7448[(w >> 16) & 0xff] & 0xff]
             ^ data_ov006_021b5848[data_ov006_021b7448[(w >> 8) & 0xff] & 0xff]
             ^ data_ov006_021b5c48[data_ov006_021b7448[w & 0xff] & 0xff];
    }

    return n;
}
