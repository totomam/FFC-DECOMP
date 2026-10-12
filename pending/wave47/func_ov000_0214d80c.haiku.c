#include "ffc/types.h"

extern int func_ov000_0214ecc8(void);
extern int func_020889dc(void);
extern int func_020876c0(void *p);
extern int func_0208763c(void *p);
extern int func_ov000_0214d8e8(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern int func_02087678(void *p);

int func_ov000_0214d80c(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    int r4;
    int r0;
    int r1;
    int8_t v;
    uint8_t *r6;
    int ret;

    if (func_ov000_0214ecc8() != 0) {
        int t = 0x1b;
        return ~t;
    }
    if (!(f & 4)) {
        r4 = 0xae;
        if (*(int8_t *)(a + r4) != 0) {
            if (func_020889dc() == 0x12) {
                return r4 - 0xca;
            }
            r4 = 1;
        } else {
            r4 = 0;
        }
    } else {
        r4 = 0;
    }

    r0 = 0;
    if (a != 0) {
        int16_t h0 = *(int16_t *)(a + 0xac);
        if (h0 & 1) {
            r0 = 1;
        }
    }
    if (r0 == 0) {
        int t = 0x26;
        return ~t;
    }

    r1 = 1;
    v = *(int8_t *)(a + 0xaf);
    if (v != 0 && v != 4) {
        r1 = 0;
    }
    if (r1 != 0) {
        int16_t h = *(int16_t *)(a + 0xac);
        if (!(h & 4) || (h & 8)) {
            int t = 0x37;
            return ~t;
        }
    }

    r6 = *(uint8_t **)(a + 0xa0);
    if (r4 & 1) {
        func_0208763c(r6 + 0xe0);
    } else {
        if (func_020876c0(r6 + 0xe0) == 0) {
            return -6;
        }
    }

    ret = func_ov000_0214d8e8(a, b, c, d, e, r4, f);
    func_02087678(r6 + 0xe0);
    return ret;
}
