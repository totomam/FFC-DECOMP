#include "ffc/types.h"

extern void func_ov000_021663e8(uint8_t *dst, const int8_t *src, uint32_t n);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov001_02184340(uint8_t *a, uint32_t b, uint8_t *c, int32_t d);
extern void func_ov001_021842c8(uint8_t *a, int32_t b, uint8_t *c);

void func_ov001_02184464(uint8_t *p, uint8_t *q, const int8_t *text, int32_t n)
{
    uint8_t buf[0x41];
    uint32_t *off;
    uint32_t len;

    if (n >= 1 && n <= 0x41 && text[n - 1] == 0) {
        func_ov000_021663e8(buf, text, 0x41);
        func_ov001_02184340(p + 0x44, func_02092864(p + 0x44), buf, n - 1);
        off = (uint32_t *)(q + 0x578);
        func_ov001_021842c8(buf, n - 1, q + *off);
        len = func_02092864(q + *off);
        *off = *off + (len + 1);
    }
}
