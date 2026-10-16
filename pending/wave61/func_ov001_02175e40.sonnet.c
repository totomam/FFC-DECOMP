#include "ffc/types.h"
extern int func_ov001_0217c8f0(void *a, void *b, void **c);
int func_ov001_02175e40(uint32_t *p, void *b, int *out) {
    uint32_t *q;
    void *s;
    int *r;
    int v;
    if (p == 0 || (q = (uint32_t *)*p) == 0) return 2;
    if (q[0x108 / 4] != 0) { *out = 0; return 0; }
    if (func_ov001_0217c8f0(p, b, &s) && (r = ((int **)s)[2]) != 0) v = *r;
    else if (func_ov001_0217c8f0(p, b, &s) && (r = ((int **)s)[3]) != 0) v = *r;
    else v = -1;
    *out = v;
    return 0;
}
