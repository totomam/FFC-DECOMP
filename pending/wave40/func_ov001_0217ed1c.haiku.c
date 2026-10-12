#include "ffc/types.h"

extern uint8_t *func_02092b00(uint8_t *buf, const uint8_t *text, uint32_t off, uint8_t *out);
extern uint32_t func_02092864(const uint8_t *text);

uint32_t func_ov001_0217ed1c(uint8_t *base, const uint8_t *text, uint32_t *off, uint8_t *out, int32_t maxlen)
{
    uint8_t *cur = base + *off;
    int8_t delim = (int8_t)text[0];
    uint8_t *found = func_02092b00(cur, text, *off, out);
    int8_t *p;
    int32_t i = 0;
    int32_t lim;

    if (found == 0) {
        return 0;
    }
    p = (int8_t *)(found + func_02092864(text));
    lim = maxlen - 1;
    while (i < lim && p[i] != 0 && p[i] != delim) {
        out[i] = (uint8_t)p[i];
        i++;
    }
    out[i] = 0;
    *off = *off + (uint32_t)((uint8_t *)p - cur) + func_02092864(out);
    return 1;
}
