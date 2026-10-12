#include "ffc/types.h"

extern int32_t func_02036994(void *p, int32_t i);
extern int32_t func_020367bc(void *p, int32_t i);
extern int32_t func_0203c474(int32_t a, int32_t b, int32_t c);

int32_t func_ov005_021979d8(void *p)
{
    int32_t i;
    int32_t a;
    int32_t b;
    int32_t c;

    for (i = 0; i < 3; i++) {
        if (func_02036994(p, i) == 0) {
            return 0;
        }
    }
    a = func_020367bc(p, 0);
    b = func_020367bc(p, 1);
    c = func_020367bc(p, 2);
    return func_0203c474(a, b, c);
}
