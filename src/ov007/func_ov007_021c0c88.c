#include "ffc/types.h"

int func_ov007_021c0c88(int8_t **a, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        int8_t *p = a[i];
        if (p == 0 || *p == 0) {
            return 7;
        }
    }
    return 0;
}
