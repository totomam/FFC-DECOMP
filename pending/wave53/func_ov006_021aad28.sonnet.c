#include "ffc/types.h"

extern uint8_t data_ov006_021b861c[];
extern uint8_t *data_ov006_021bc784;
extern void func_ov006_021b04fc(uint8_t *tbl, uint8_t *out);
extern void func_ov006_021a6508(int *out, int v);
extern int func_ov000_02158824(uint8_t *p);

struct blk {
    uint8_t arr[4];
    int res;
    uint8_t key[4];
};

int func_ov006_021aad28(void)
{
    struct blk s;
    int k;
    uint8_t *d;
    uint8_t *base;
    uint8_t *e;
    int i, j;
    int found;

    s.key[0] = data_ov006_021b861c[0];
    s.key[1] = data_ov006_021b861c[1];
    s.key[2] = data_ov006_021b861c[2];
    s.key[3] = data_ov006_021b861c[3];

    d = data_ov006_021bc784;
    base = d + 8;
    for (i = 0; i < 4; i++) {
        e = base + 3 * i;
        if (e[0] != 0x20) {
            for (j = 0; j < 3; j++) {
                if (e[j] > s.key[j]) {
                    return 0;
                }
                if (e[j] < s.key[j]) {
                    break;
                }
            }
        }
    }

    func_ov006_021b04fc(d + 8, s.arr);
    s.res = 0;
    func_ov006_021a6508(&s.res, 0);
    if (s.res == 1) {
        found = 0;
        for (k = 0; k < 4; k++) {
            for (j = 0; j < 8; j++) {
                if (found) {
                    if (s.arr[k] & (1 << (7 - j))) {
                        return 0;
                    }
                } else {
                    if (!(s.arr[k] & (1 << (7 - j)))) {
                        found = 1;
                    }
                }
            }
        }
        return 1;
    } else {
        found = 0;
        if (func_ov000_02158824(s.arr) != 0) {
            found = 1;
        }
        return found;
    }
}
