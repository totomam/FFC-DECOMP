#include "ffc/types.h"

extern void *func_020903cc(void *object, uint32_t c, uint32_t n);
extern void func_02090380(void *destination, const void *source, uint32_t length);

void *func_ov006_021a0dd0(uint8_t *dst, uint32_t a, const void *src, uint32_t len)
{
    uint8_t *d;
    int32_t x;
    uint32_t size;

    d = dst;
    x = (uint16_t)a;
    d[0] = 0;
    d[1] = 0;
    d[2] = 0;
    d[3] = 0;
    *(uint16_t *)d = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
    size = ((len + 11) & ~7u) - 4;
    x = (uint16_t)len;
    *(uint16_t *)(d + 2) = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
    d += 4;
    func_020903cc(d, 0, size);
    func_02090380(d, src, len);
    return d + size;
}
