#include "ffc/types.h"

extern int32_t func_ov002_0219c60c(void *p);
extern int32_t func_ov002_0219c5c4(void *p, int32_t x);
extern int32_t func_ov002_0219b860(void *p);

int32_t func_ov002_021b3c90(void *p)
{
    int32_t r;

    switch (func_ov002_0219c60c(p)) {
    case 0:
        r = 0;
        if (func_ov002_0219c5c4(p, 0) == 0) {
            r = 1;
            if (func_ov002_0219c5c4(p, 1) == 0) {
                r = 2;
            }
        }
        break;
    case 1:
        r = 3;
        if (func_ov002_0219c5c4(p, 3) == 0) {
            r = 4;
            if (func_ov002_0219c5c4(p, 4) == 0) {
                r = 5;
            }
        }
        break;
    }

    if (func_ov002_0219b860(p) == 1) {
        r += 6;
    }
    return r;
}
