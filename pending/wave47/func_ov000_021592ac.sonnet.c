#include "ffc/types.h"

extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02092a04(uint8_t *a, uint8_t *b, uint32_t n);
extern void func_020928f0(uint8_t *dst, uint8_t *src, uint32_t n);

int func_ov000_021592ac(uint8_t *base, uint8_t *out, uint8_t *text, int ch)
{
    uint8_t *p;
    uint8_t *q;
    int len;

    p = func_02092a2c(text, ch);
    if (p == 0) {
        return -1;
    }

    for (;;) {
        if (func_02092a04(p + 1, base, func_02092864(base)) == 0 &&
            ch == *(int8_t *)(func_02092864(base) + (uint32_t)p + 1)) {
            break;
        }
        q = func_02092a2c(p + 1, ch);
        if (q == 0) {
            return -1;
        }
        p = func_02092a2c(q + 1, ch);
        if (p == 0) {
            return -1;
        }
    }

    p = func_02092a2c(p + 1, ch);
    if (p == 0) {
        return -1;
    }

    q = func_02092a2c(p + 1, ch);
    if (q != 0) {
        len = q - (p + 1);
    } else {
        len = func_02092864(p + 1);
    }

    if (out == 0) {
        return len;
    }
    func_020928f0(out, p + 1, len);
    out[len] = 0;
    return len;
}
