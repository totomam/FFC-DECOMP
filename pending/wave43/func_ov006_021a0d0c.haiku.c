#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint32_t func_ov006_021a194c(void *destination, const void *source, uint32_t length, uint32_t flag, uint32_t x);

uint32_t func_ov006_021a0d0c(uint8_t *p, uint32_t a, uint8_t *out, uint32_t b, uint32_t flag)
{
    uint32_t sum;
    uint8_t *q;
    uint8_t *end;
    uint16_t v;

    sum = 0;
    v = (uint16_t)(b - 8);
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
    out[4] = 0;
    out[5] = 0;
    out[6] = 0;
    out[7] = 0;
    *(uint16_t *)out = (uint16_t)(((v << 8) & 0xff00) | (v >> 8));

    if (flag == 0) {
        func_02090380(p + 6, out, b);
    } else {
        func_ov006_021a194c(p + 6, out, b, flag, 0x10);
        b += 8;
    }

    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    *(uint16_t *)p = (uint16_t)(((a << 8) & 0xff00) | ((a >> 8) & 0xff));
    *(uint16_t *)(p + 2) = (uint16_t)(((b << 8) & 0xff00) | ((b >> 8) & 0xff));

    end = p + 6 + b;
    for (q = p; q < end; q++) {
        sum += *q;
    }
    *(uint16_t *)end = (uint16_t)(((sum << 8) & 0xff00) | ((sum >> 8) & 0xff));
    return (uint32_t)(end + 2 - p);
}
