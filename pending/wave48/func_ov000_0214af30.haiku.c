#include "ffc/types.h"

extern uint8_t *func_ov000_02147a14(uint32_t *len, uint8_t *p);
extern void func_ov000_02147ab0(int kind, uint8_t *p);
extern int func_ov000_0214ac30(uint8_t *buf, uint32_t len, uint8_t *p);
extern void func_ov000_0214a23c(uint8_t *s, uint8_t *b);
extern void func_ov000_0214ac74(uint8_t *s, uint8_t *b, uint32_t len);
extern void func_ov000_0214ac94(uint8_t *s, uint8_t *b);
extern uint8_t *(*data_ov000_0216bc74)(uint32_t);
extern void (*data_ov000_0216bca4)(uint8_t *);

uint8_t func_ov000_0214af30(uint8_t *p)
{
    uint8_t *s = *(uint8_t **)(p + 0xc);
    uint32_t len;
    uint8_t *buf;
    uint8_t *b;

    for (;;) {
        buf = func_ov000_02147a14(&len, p);
        if (len >= 5) {
            break;
        }
        if (len == 0 || p[8] == 0) {
            s[0x455] = 9;
            return;
        }
    }

    if (buf[0] == 0x80) {
        if (s[0x454] != 0 && s[0x455] == 0) {
            len = buf[1];
            func_ov000_02147ab0(2, p);
            b = (*data_ov000_0216bc74)(len);
            if (b == 0) {
                s[0x455] = 9;
                return;
            }
            if (func_ov000_0214ac30(b, len, p) == 0 && b[0] == 1) {
                func_ov000_0214a23c(s, b + 1);
            } else {
                s[0x455] = 9;
            }
            func_ov000_0214ac74(s, b, len);
            (*data_ov000_0216bca4)(b);
        } else {
            s[0x455] = 9;
        }
    } else {
        len = (buf[3] << 8) + buf[4] + 5;
        if (len > 0x4805) {
            s[0x455] = 9;
            return;
        }
        b = (*data_ov000_0216bc74)(len);
        if (b == 0) {
            s[0x455] = 9;
            return;
        }
        if (func_ov000_0214ac30(b, len, p) != 0) {
            (*data_ov000_0216bca4)(b);
            s[0x455] = 9;
            return;
        }
        func_ov000_0214ac94(s, b);
    }
    return s[0x455];
}
