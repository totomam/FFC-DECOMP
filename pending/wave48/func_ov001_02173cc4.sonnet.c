#include "ffc/types.h"

extern int32_t func_0208f918(void *buf, int32_t a, int32_t n, int32_t f);
extern int32_t func_ov001_021721f8(void *obj, void *buf);

int32_t func_ov001_02173cc4(int32_t *s, int32_t *o) {
    uint8_t a_[0x1003];
    uint8_t *hdr = a_;
    uint8_t *buf = a_ + 3;
    int32_t n, ret, pos;
    int32_t *p;
    uint32_t sgn, t;
    int32_t z;

    for (;;) {
        n = func_0208f918(buf, 1, 0x1000, s[2]);
        if (n <= 0) {
            o[0x124 / 4] = 1;
            o[0x40 / 4] = 0xe;
            return 0;
        }
        pos = s[1] + n;
        s[1] = pos;
        if (pos > s[3]) {
            o[0x124 / 4] = 1;
            o[0x40 / 4] = 0xe;
            return 0;
        }
        ret = func_ov001_021721f8(o, buf);
        if (ret == 0) return 0;
        if (s[1] == s[3]) {
            p = *(int32_t **)((uint8_t *)o + 0x164);
            if (p[5] != 0) {
                n = s[3] % 4;
                n = 4 - n;
                z = 0;
                hdr[0] = z;
                hdr[1] = z;
                hdr[2] = z;
                if (n != 4 && n > 0) {
                    if (func_ov001_021721f8(o, hdr) == 0) return z;
                }
            }
            return 1;
        }
        if (ret != 1) return 2;
    }
}
