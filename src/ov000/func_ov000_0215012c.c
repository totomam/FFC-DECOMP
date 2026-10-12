#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void *a);
extern int func_02087460(void);
extern void *func_021d872c(void *a, int b, uint8_t *c);
extern uint8_t data_ov000_0216962c[];

void *func_ov000_0215012c(void *a)
{
    uint8_t buf[4];
    uint8_t *bp;
    uint8_t *base;
    uint8_t *p;
    uint8_t *q;
    uint32_t off;
    uint16_t x;
    uint16_t n;
    int ok;

    p = (uint8_t *)a;
    base = func_ov000_0214fa54(a);
    buf[0] = data_ov000_0216962c[0];
    buf[1] = data_ov000_0216962c[1];
    buf[2] = data_ov000_0216962c[2];
    buf[3] = data_ov000_0216962c[3];
    bp = buf;

    if (p == 0) {
        return 0;
    }

    off = 0x12df;
    if (func_02087460() != 0) {
        if (base[off] == 2) {
            x = *(uint16_t *)(p + 0x3e);
            q = 0;
            if (x != 0) {
                q = (uint8_t *)func_021d872c(p, 0xdd, bp);
            }
            if (q != 0) {
                uint8_t *r;
                r = q + 0xa;
                if (*(uint16_t *)(q + 0xa) == 1) {
                    return r;
                }
            }
        }
    } else {
        if (base[off] == 1) {
            n = *(uint16_t *)(p + 0x3c);
            if (n != 0) {
                ok = 0;
                if (n >= 0x10 && n <= 0x80) {
                    if (n == p[0x4a] + 0x10) {
                        if (*(uint16_t *)(p + 0x40) == 1) {
                            uint32_t t = n + 1;
 if (*(uint16_t *)p == ((t + 0x40) >> 1)) {
                                ok = 1;
                            }
                        }
                    }
                }
                if (ok == 1) {
                    return p + 0x40;
                }
            }
        }
    }
    return 0;
}
