#include "ffc/types.h"

extern int32_t func_ov002_021ae5fc(void *a, uint32_t *b, int32_t *c, int32_t d);
extern int32_t func_ov002_021ae744(void *a, int32_t b);
extern void *func_ov002_021ae63c(void *a, int32_t b);
extern int16_t func_0203c410(const int16_t *values, uint32_t index);

void func_ov002_021adac0(void *p0, uint32_t *p1, int32_t *p2, int32_t p3)
{
    int32_t i;
    int32_t r7;
    int16_t *t;
    int32_t k;
    int32_t ok;

    k = func_ov002_021ae5fc(p0, p1, p2, p3);
    if (k == 1 || k == 2 || k == 5) {
        ok = 1;
    } else {
        ok = 0;
    }

    if (ok != 0) {
        if (p3 != 0) {
            r7 = 1;
            if (func_ov002_021ae744(p0, 1) == 0) {
                goto done;
            }
        } else {
            r7 = 0;
            if (func_ov002_021ae744(p0, 0) == 0) {
                goto done;
            }
        }

        t = (int16_t *)func_ov002_021ae63c(p0, r7);

        for (i = 0; i < 4; i++) {
            if (func_0203c410(t, i) != 0) {
                *p1 |= (1u << i);
                p2[i] += func_0203c410(t, i);
            }
        }
    }
done:
    ;
}
