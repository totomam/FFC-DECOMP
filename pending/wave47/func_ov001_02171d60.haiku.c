#include "ffc/types.h"

extern int32_t func_ov000_021655ac(int32_t, int32_t, int32_t *, int32_t *);
extern int32_t func_ov000_021655a0(int32_t);
extern int32_t func_ov001_02172124(int32_t *, int32_t, int32_t);

int32_t func_ov001_02171d60(int32_t *a) {
    int32_t s0, s1;
    int32_t r;
    for (;;) {
        if (a[102] == 0 || a[106] == 1) {
            r = func_ov000_021655ac(a[20], 0, &s0, &s1);
            if (r == -1 || (r == 1 && s1 != 0)) {
                a[73] = 1;
                a[16] = 5;
                if (r == -1) {
                    a[21] = func_ov000_021655a0(a[20]);
                } else {
                    a[21] = 0;
                }
                return 0;
            }
            if (r < 1 || s0 == 0) {
                return 1;
            }
        }
        {
            int32_t r3 = a[26];
            r = func_ov001_02172124(a, a[23] + r3, a[25] - r3);
            if (r == -2) {
                return 1;
            }
            if (r == -1) {
                return 0;
            }
            a[26] += r;
            if (a[26] >= a[25]) {
                return 1;
            }
        }
    }
}
