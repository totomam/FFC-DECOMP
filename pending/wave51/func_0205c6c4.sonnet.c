#include "ffc/types.h"

extern void func_02090398(int32_t *p);

typedef struct {
    int32_t *ptr;
    int32_t idx;
    int32_t tot;
} S;

void func_0205c6c4(S *s, int32_t *a, int32_t *b)
{
    int32_t *q = s->ptr + s->idx;
    int32_t d;

    if ((uint32_t)a[0] <= (uint32_t)b[0]) {
        func_02090398(q - (b[0] - a[0]) / 4);
        d = (b[0] - a[0]) / 4;
        s->tot += d;
        s->idx -= d;
    } else {
        int32_t *r = q - (b[0] - b[1]) / 4;
        func_02090398(r);
        func_02090398(r - (a[3] - a[0]) / 4);
        d = (b[0] - b[1]) / 4 + (a[3] - a[0]) / 4;
        s->idx -= d;
        s->tot += d;
    }
}
