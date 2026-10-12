#include "ffc/types.h"

typedef struct {
    int32_t pos;
    int32_t len;
    int32_t mode;
} FfcState;

extern void func_ov000_02165ca4(int32_t pos, int8_t *buf, int32_t n);
extern int8_t data_ov000_02169762[];
extern int8_t data_ov000_0216975f[];
extern int8_t data_ov000_0216975c[];

int func_ov000_02165f84(FfcState *p, int8_t *buf) {
    int8_t *tbl;
    int i;
    int n;

    if (p->len <= 0) {
        return 0;
    }
    switch (p->mode) {
    case 1:
        tbl = data_ov000_02169762;
        break;
    case 2:
        tbl = data_ov000_0216975f;
        break;
    default:
        tbl = data_ov000_0216975c;
        break;
    }
    n = p->len;
    if (n >= 3) {
        n = 3;
    }
    func_ov000_02165ca4(p->pos, buf, n);
    p->pos += 3;
    p->len -= 3;
    for (i = 0; i < 4; i++) {
        int c = buf[i];
        if (c <= 0x19) {
            buf[i] = (int8_t)(c + 0x41);
        } else if (c <= 0x33) {
            buf[i] = (int8_t)(c + 0x47);
        } else if (c <= 0x3d) {
            buf[i] = (int8_t)(c - 4);
        } else if (c == 0x3e) {
            buf[i] = tbl[i];
        } else if (c == 0x3f) {
            buf[i] = tbl[1];
        }
    }
    if (p->len < 0) {
        buf[3] = tbl[2];
        if (p->len == -2) {
            buf[2] = tbl[2];
        }
    }
    return 1;
}
