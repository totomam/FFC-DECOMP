#include "ffc/types.h"

extern int func_ov003_02146574(int a, int b, int c, int d, uint32_t *p, int x, int y);
extern int func_0209a33c(int a, int b);
extern int func_0209b108(int a, int b);

int func_ov003_021472a0(int a, int b, int c, int d, int e, uint32_t *p)
{
    int i;
    if (func_ov003_02146574(a, b, c, d, p, 1, 0) == 0) {
        if (func_0209a33c(0, d) < 0) {
            do {
                if (func_ov003_02146574(a, b, c, 0, p, 1, 0) != 0) {
                    break;
                }
                i = func_0209b108(0, e);
            } while (func_0209a33c(i, d) < 0);
        }
    }
    if (*p & 0xf) {
        return 1;
    }
    return 0;
}
