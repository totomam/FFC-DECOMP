#include "ffc/types.h"
extern int func_ov000_02149ebc(const int8_t *s);
int func_ov000_02149ed4(const int8_t *a, const int8_t *b) {
    int z = 0;
    int c, d;
    goto start;
    for (;;) {
        if (d == 0) return 0;
    start:
        c = *b;
        d = a[z];
        b++;
        a++;
        if (d == c) continue;
        if (c != 0x2a) return 1;
        a--;
        {
            int la = func_ov000_02149ebc(a);
            int lb = func_ov000_02149ebc(b);
            if (lb > la) return 1;
            a += la - lb;
        }
        goto start;
    }
}
