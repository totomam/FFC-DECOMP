#include "ffc/types.h"

extern struct { uint32_t pad; uint8_t *base; } data_ov001_0219575c;
extern long long func_ov001_02185efc(void *obj, uint8_t *p, uint32_t lo, uint32_t hi);
extern long long func_020996c0(long long a, long long b);
extern float func_02099dd8(long long a);
extern int func_ov001_02186890(void *a, void *b);

int func_ov001_021869f0(void **pa, void **pb)
{
    void *a = *pa;
    void *b = *pb;
    uint8_t *base = data_ov001_0219575c.base;
    long long x = func_ov001_02185efc(a, base + 0x498, 0, 0);
    long long y = func_ov001_02185efc(b, base + 0x498, 0, 0);
    long long d = func_020996c0(x, y);

    if (func_02099dd8(d) > 0.0f) goto L60;
    if (func_02099dd8(d) < 0.0f) goto L60;
    return func_ov001_02186890(a, b);

L60:
    if (*(uint32_t *)(data_ov001_0219575c.base + 0x6a0) == 0) {
        d = func_020996c0(0, d);
    }
    if (func_02099dd8(d) > 0.0f) return 1;
    return -(func_02099dd8(d) < 0.0f);
}
