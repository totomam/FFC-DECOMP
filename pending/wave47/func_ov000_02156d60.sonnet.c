#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_020928f0(uint8_t *dst, const uint8_t *src, uint32_t n);
extern uint8_t *func_02092b00(const uint8_t *text, const uint8_t *pat);
extern uint32_t func_02093b18(const uint8_t *s);
extern const uint8_t data_ov000_02169ea4[];
extern const uint8_t data_ov000_02169eac[];
extern const uint8_t data_ov000_02169eb8[];
extern const uint8_t data_ov000_02169ebc[];

uint32_t func_ov000_02156d60(uint8_t *p, const uint8_t *s)
{
    uint8_t *r4 = 0;
    uint8_t *t;
    uint8_t *u;
    uint8_t *v;
    uint32_t off;
    uint8_t *w;

    if (func_02092864(s) >= 0x100) {
        return 0;
    }
    func_020928f0(p + 0x1024, s, 0x100);
    if (func_02092864(s) != func_02092864(p + 0x1024)) {
        return 0;
    }
    if (func_02092b00(p + 0x1024, data_ov000_02169ea4) != 0) {
        *(uint8_t **)(p + 0x1124) = p + 0x1024 + 7;
        *(uint32_t *)(p + 0x1130) = 0;
        *(uint16_t *)(p + 0x1134) = 0x50;
    } else {
        t = func_02092b00(p + 0x1024, data_ov000_02169eac);
        if (t == 0) {
            return 0;
        }
        *(uint8_t **)(p + 0x1124) = t + 8;
        *(uint32_t *)(p + 0x1130) = 1;
        *(uint16_t *)(p + 0x1134) = 0x1bb;
    }
    off = 0x1124;
    t = func_02092b00(*(uint8_t **)(p + off), data_ov000_02169eb8);
    if (t != 0) {
        r4 = t + 1;
        *t = 0;
    }
    u = func_02092b00(*(uint8_t **)(p + off), data_ov000_02169ebc);
    w = u;
    if (w == 0) {
        v = 0;
    } else {
        *w = 0;
        v = w + 1;
    }
    *(uint8_t **)(p + off + 4) = v;
    if (r4 != 0) {
        *(uint16_t *)(p + 0x1134) = (uint16_t)func_02093b18(r4);
    }
    return 1;
}
