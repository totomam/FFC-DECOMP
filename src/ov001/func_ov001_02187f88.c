#include "ffc/types.h"
extern int32_t func_ov001_02186c70(void *a, uint32_t b, uint16_t c);
extern void func_ov001_02186ce4(void *a, int32_t b);
int32_t func_ov001_02187f88(void *p, uint8_t *src, int32_t len) {
    uint16_t h; uint32_t w;
    uint8_t *d; uint8_t *e;
    int32_t r;
    if (len < 6) return 4;
    d = (uint8_t*)&w;
    d[0] = src[0]; d[1] = src[1]; d[2] = src[2]; d[3] = src[3];
    e = (uint8_t*)&h;
    e[0] = src[4]; e[1] = src[5];
    r = func_ov001_02186c70(p, w, h);
    if (r == -1) return 0;
    func_ov001_02186ce4(p, r);
    return 0;
}
