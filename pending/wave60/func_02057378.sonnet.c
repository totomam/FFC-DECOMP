/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern int32_t func_0208f694(int32_t value);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern char data_020b0c7c[];
}
typedef struct { int32_t a,b,c,d,e,f,g,h; } R;
static inline const int32_t &mn(const int32_t &a, const int32_t &b) { return b < a ? a : b; }
extern "C" uint32_t *func_02057378(uint32_t *p, R r)
{
    p[3] &= ~0xff;
    p[7] = -1;
    p[9] = -1;
    p[11] = 1;
    p[0] = (uint32_t)data_020b0c7c;
    ((uint8_t*)p)[0x13] = 0;
    p[0x11] = r.a;
    ((uint8_t*)p)[0x14] = 0;
    p[0x15] = r.e;
    ((uint8_t*)p)[0x15] = 0;
    p[0x16] = r.f;
    p[12] = 0;
    p[0x17] = r.g;
    p[0x12] = r.b;
    p[0x18] = r.h;
    p[0x13] = r.c;
    p[0x14] = r.d;
    int32_t m = mn(mn(func_0208f694(r.d - r.h), func_0208f694(r.c - r.g)), mn(func_0208f694(r.b - r.f), func_0208f694(r.a - r.e)));
    p[7] = m + 1;
    p[0x19] = func_0209a76c((r.e - r.a) << 16, p[7] - 1);
    p[0x1a] = func_0209a76c((r.f - r.b) << 16, p[7] - 1);
    p[0x1b] = func_0209a76c((r.g - r.c) << 16, p[7] - 1);
    p[0x1c] = func_0209a76c((r.h - r.d) << 16, p[7] - 1);
    return p;
}
