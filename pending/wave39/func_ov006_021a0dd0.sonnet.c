#include "ffc/types.h"

extern void *func_020903cc(void *object, uint32_t c, uint32_t n);
extern void func_02090380(void *destination, const void *source, uint32_t length);

void *func_ov006_021a0dd0(uint8_t *dst, uint32_t a, const void *src, uint32_t len)
{
    uint32_t l = len;
    int z = 0;
    int32_t x = (uint16_t)a;
    uint32_t size;
    uint16_t h;
    dst[0] = z;
    h = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
    dst[1] = z;
    dst[2] = z;
    dst[3] = z;
    *(uint16_t *)dst = h;
    size = ((l + 11) & ~7u) - 4;
    x = (uint16_t)l;
    *(uint16_t *)(dst + 2) = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
    dst += 4;
    func_020903cc(dst, z, size);
    func_02090380(dst, src, l);
    return dst + size;
}
