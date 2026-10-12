#include "ffc/types.h"

extern int8_t *func_02092a2c(int8_t *text, uint32_t character);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern int32_t func_02093b18(int8_t *s);
extern int32_t func_02165588(int8_t *s);
extern void *func_0214ee74(int8_t *s);
extern uint16_t data_020a6254[];

int32_t func_ov001_02182214(int8_t *s, int32_t *out1, uint16_t *out2)
{
    int8_t buf[0x104];
    int8_t *volatile p;
    int8_t *c;
    int32_t val = 0;
    uint16_t port = 0;

    if (s == 0 || s[0] == 0) {
        goto done;
    }

    p = func_02092a2c(s, ':');
    if (p == 0) {
        port = 0;
        goto lookup;
    }

    if (p == s) {
        s = 0;
    } else {
        uint32_t len = (uint32_t)(p - s);
        func_02090380(buf, s, len);
        buf[len] = 0;
        s = buf;
    }

    for (c = p + 1; *c != 0; c++) {
        if (*c >= 0x80 || (data_020a6254[*c] & 8) == 0) {
            return 0;
        }
    }

    val = func_02093b18(p + 1);
    if (val < 0 || val > 0xffff) {
        return 0;
    }
    port = (uint16_t)val;

lookup:
    if (s != 0) {
        val = func_02165588(s);
        if (val == -1) {
            void *r = func_0214ee74(s);
            if (r == 0) {
                return 0;
            }
            {
                int32_t **x = *(int32_t ***)((int8_t *)r + 0xc);
                val = **x;
            }
        }
    }

done:
    if (out1 != 0) {
        *out1 = val;
    }
    if (out2 != 0) {
        *out2 = port;
    }
    return 1;
}
