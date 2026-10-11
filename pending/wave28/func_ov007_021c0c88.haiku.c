#include "ffc/types.h"

int func_ov007_021c0c88(int8_t **a, int n)
{
    int i = 0;
    int8_t *p;
    int8_t c;
    while (i < n) {
        p = a[i];
        c = 0;
        if (p != 0) {
            c = p[i];
        }
        if (c == 0) {
            return 7;
        }
        i++;
    }
    return 0;
}
