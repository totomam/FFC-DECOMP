#include "ffc/types.h"

extern int func_ov000_02154ed0(char *p);
extern int func_ov000_0215999c(int i);
extern int func_ov000_02154e78(char *p);
extern void func_ov000_02159d30(char *base, int a, int b);
extern int data_ov000_0217004c[];

int func_ov000_02159d64(char *base, int n, int x)
{
    int i;
    int v;

    if (func_ov000_02154ed0(base + n * 12) == 1) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        v = func_ov000_0215999c(i);
        if (v != 0 && v == x) {
            if (func_ov000_02154e78(base + n * 12) != 0 &&
                func_ov000_02154e78(base + i * 12) == 0) {
                func_ov000_02159d30(base, i, n);
            } else {
                func_ov000_02159d30(base, n, i);
            }
            ((uint8_t *)data_ov000_0217004c[3])[0x1d] = 1;
            return 1;
        }
    }
    return 0;
}
