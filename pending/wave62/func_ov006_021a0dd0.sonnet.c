/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void *func_020903cc(void *p, int v, uint32_t n);
extern void func_02090380(void *d, const void *s, uint32_t n);
uint8_t *func_ov006_021a0dd0(uint8_t *p, uint32_t a, const void *src, uint32_t len) {
    uint32_t size;
    uint32_t z = 0;
    uint16_t v = a, w;
    p[0] = z; p[1] = z; p[2] = z; p[3] = z;
    *(uint16_t *)p = (uint16_t)((uint8_t)(v >> 8) | ((v << 8) & 0xff00));
    size = ((len + 11) & ~7u) - 4;
    w = len;
    *(uint16_t *)(p + 2) = (uint16_t)((uint8_t)(w >> 8) | ((w << 8) & 0xff00));
    p += 4;
    func_020903cc(p, z, size);
    func_02090380(p, src, len);
    return p + size;
}
