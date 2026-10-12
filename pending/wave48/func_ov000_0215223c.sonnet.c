#include "ffc/types.h"

extern int func_ov000_02153624(void *p);
extern int func_ov000_02151a28(void *p);
extern int func_ov000_021535ec(void *p);
extern int func_02092a04(void *a, void *b);

typedef struct {
    uint8_t lo : 6;
    uint8_t f : 1;
    uint8_t hi : 1;
} Flags;

uint8_t func_ov000_0215223c(uint8_t *p) {
    uint8_t *q0;
    uint8_t *ep;
    int ret;
    uint8_t *e;
    int n;
    int cnt;
    int i;
    int off;

    ep = p + 0xc20 + p[0x14c3] * 0xc0;
    ret = 0;
    n = func_ov000_02153624(0);
    if (!((Flags *)(p + 0x14bc))->f) {
        cnt = 0;
        if (*(uint16_t *)(ep + 0xa) == 0x20) {
            ret = func_ov000_02151a28(ep);
            if (ret > 0) {
                cnt++;
            } else {
                ret = cnt;
            }
        } else if (*(uint16_t *)(ep + 0xa) == 8) {
            ret = func_ov000_021535ec(ep);
            if (ret == 0) {
                ret = cnt;
            } else {
                cnt++;
            }
        }
        q0 = p + 0x900;
        for (i = 0; i < n; i++) {
            off = i * 0x24;
            e = p + off;
            if (*(uint16_t *)(ep + 0xa) == e[0x903] && func_02092a04(ep + 0xc, p + 0x904 + off) == 0) {
                if (cnt == 0) {
                    ret = e[0x901];
                } else {
                    q0[off] = (q0[off] & ~0xf0) | 0x10;
                    ((Flags *)(p + 0x14bc))->f = 1;
                }
                cnt++;
            }
        }
    } else {
        cnt = 0;
        for (i = 0; i < n; i++) {
            e = p + i * 0x24;
            if ((e[0x900] >> 4 & 0xf) == 1) {
                if (cnt == 0) {
                    e[0x900] &= ~0xf0;
                    ret = e[0x901];
                }
                cnt++;
            }
        }
        if (cnt == 1) {
            ((Flags *)(p + 0x14bc))->f = 0;
        }
    }
    return (uint8_t)ret;
}
