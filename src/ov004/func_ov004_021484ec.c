/* cflags: -lang c++ */
#include "ffc/types.h"
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int sub1(const Num &a) { return a.v - 1; }
typedef struct { uint32_t *base; int32_t count; } FfcList;
extern "C" uint32_t *func_ov004_021484ec(FfcList *l, uint32_t *dst);
extern "C" uint32_t *func_ov004_021484ec(FfcList *l, uint32_t *dst)
{
    uint32_t *end = (uint32_t *)((uint8_t *)l->base + (l->count << 3));
    int32_t n = ((uint8_t *)end - (uint8_t *)dst) / 8;
    if (n - 1) {
        uint32_t *d = dst;
        uint32_t *src = dst + 2;
        while (src < end) {
            uint32_t a = src[0];
            d[0] = a;
            uint32_t b = src[1];
            src += 2;
            d[1] = b;
            d += 2;
        }
    }
    l->count = sub1(l->count);
    return dst;
}
