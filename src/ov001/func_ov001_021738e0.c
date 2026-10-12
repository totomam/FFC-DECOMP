#include "ffc/types.h"

extern int32_t func_020900cc(int32_t a, int32_t b, int32_t c);
extern int32_t func_0208ff10(int32_t a);
extern void func_02090190(int32_t a);

typedef struct Inner {
    int32_t state;
} Inner;

typedef struct Outer {
    Inner *in;
    int32_t f4;
    int32_t f8;
    int32_t fc;
} Outer;

int32_t func_ov001_021738e0(Outer *a)
{
    int32_t s = a->in->state;
    a->f4 = -1;
    if (s != 0) {
        if (s == 1) {
            if (a->f8 == 0) {
                return 0;
            }
            if (func_020900cc(a->f8, 0, 2) != 0) {
                return 0;
            }
            a->fc = func_0208ff10(a->f8);
            if (a->fc == -1) {
                return 0;
            }
            func_02090190(a->f8);
        } else if (s != 2 && s != 3) {
            return 0;
        }
    }
    return 1;
}
