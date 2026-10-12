#include "ffc/types.h"

extern int32_t func_0208f918(void *buf, int32_t a, int32_t n, int32_t f);
extern int32_t func_ov001_021721f8(void *obj, void *buf);

int32_t func_ov001_02173cc4(int32_t *s, int32_t *o) {
    uint8_t hdr[3];
    uint8_t buf[0x1000];
    int32_t n;
    int32_t ret;
    uint32_t t;
    int32_t sgn;
    int32_t r2;
    int32_t *p;

    for (;;) {
        n = func_0208f918(buf, 1, 0x1000, s[2]);
        if (n <= 0) {
            *(int32_t *)((uint8_t *)o + 0x124) = 1;
            *(int32_t *)((uint8_t *)o + 0x40) = 0xe;
            return 0;
        }
        s[1] += n;
        if (s[1] > s[3]) {
            *(int32_t *)((uint8_t *)o + 0x124) = 1;
            *(int32_t *)((uint8_t *)o + 0x40) = 0xe;
            return 0;
        }
        ret = func_ov001_021721f8(o, buf);
        if (ret == 0) {
            return 0;
        }
        if (s[1] != s[3]) {
            if (ret == 1) {
                continue;
            }
            return 2;
        }
        p = *(int32_t **)((uint8_t *)o + 0x164);
        if (p[5] != 0) {
            sgn = (uint32_t)s[3] >> 31;
            t = ((uint32_t)s[3] << 30) - sgn;
            r2 = ((t >> 30) | (t << 2)) + sgn;
            r2 = 4 - r2;
            hdr[0] = 0;
            hdr[1] = 0;
            hdr[2] = 0;
            if (r2 != 4 && r2 > 0) {
                if (func_ov001_021721f8(o, hdr) != 0) {
                    return 1;
                }
                return 0;
            }
        }
        return 1;
    }
}
