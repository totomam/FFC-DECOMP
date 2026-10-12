#include "ffc/types.h"

extern uint8_t *func_02092b00(uint8_t *buf, const int8_t *text, uint32_t off, int8_t *out);
extern uint32_t func_02092864(const int8_t *text);

uint32_t func_ov001_0217ed1c(uint8_t *base, const int8_t *text, uint32_t *off, int8_t *out, int32_t maxlen)
{
    int8_t *p;
    int32_t i = 0;
    int8_t delim, c;
    uint8_t *found;
    delim = text[0];
    base += *off;
    found = func_02092b00(base, text, *off, out);

    if (found == 0) {
        return 0;
    }
    p = (int8_t *)(found + func_02092864(text));
    maxlen--;
    while (i < maxlen && (c = p[i]) != 0 && c != delim) {
        out[i] = c;
        i++;
    }
    out[i] = 0;
    *off = *off + (((uint8_t *)p - base) + func_02092864(out));
    return 1;
}
