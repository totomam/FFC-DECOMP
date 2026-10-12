#include "ffc/types.h"

extern int func_ov001_0217b738(void *a, int b, void *c, void *d, void *e, void *f, void *g);
extern int func_ov001_0217cccc(void *a, void *b);
extern int func_ov001_021768a0(void *a, void *b);

int func_ov001_0217ce78(uint32_t *p0, void *p1, void *p2, void *p3, void *p4)
{
    uint32_t *obj = (uint32_t *)*p0;
    uint32_t *out;
    int r;

    obj[0x8e] += 1;
    r = func_ov001_0217b738(p0, 3, p1, &out, p2, p3, p4);
    if (r != 0) {
        return r;
    }
    r = func_ov001_0217cccc(p0, out);
    if (r != 0) {
        return r;
    }
    if (out[2] != 0) {
        r = func_ov001_021768a0(p0, (void *)out[6]);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
