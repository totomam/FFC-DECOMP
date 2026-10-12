#include "ffc/types.h"

extern void func_02088f30(void);

void func_ov006_0219aadc(uint8_t *p, uint32_t *mode, uint32_t *out, uint32_t *acc)
{
    uint32_t lo2, a, b, sum, lo, bad;
    uint32_t *s;
    uint32_t *volatile v;

    switch (*mode) {
    case 0:
        s = (uint32_t *)(p + 0x28);
        a = s[0];
        if (a < 0x02000000u || a >= 0x022C0000u) {
            goto fail;
        }
        b = s[1];
        if (a + b > 0x022C0000u) {
            goto fail;
        }
        out[2] = b;
        out[1] = a;
        out[0] = a;
        out[3] &= ~1u;
        return;
    fail:
        func_02088f30();
        return;
    case 1:
        s = (uint32_t *)p;
        v = s;
        s = s + 14;
        v = s;
        b = s[1];
        a = ((uint32_t *)p)[14];
        sum = a + b;
        lo = 0;
        bad = 0;
        if (a >= 0x02000000u && a < 0x023FE800u) {
            if (sum > 0x02300000u) {
                if (sum >= 0x023FE800u || b > 0x00040000u) {
                    bad = 1;
                } else {
                    lo = 1;
                }
            }
        } else if (a >= 0x03040000u && a < 0x03057000u) {
            if (sum <= 0x03057000u) {
                lo = 1;
            } else {
                bad = 1;
            }
        } else {
            bad = 1;
        }
        if (bad == 1) {
            func_02088f30();
        }
        lo2 = v[1];
        a = v[0];
        out[2] = lo2;
        out[1] = a;
        if (lo) {
            out[0] = acc[0];
            acc[0] += lo2;
        } else {
            out[0] = a;
        }
        out[3] = (out[3] & ~1u) | 1u;
        return;
    case 2:
        out[2] = 0x160u;
        out[1] = 0x027FFE00u;
        out[0] = 0x027FFE00u;
        out[3] &= ~1u;
        return;
    }
    return;
}
