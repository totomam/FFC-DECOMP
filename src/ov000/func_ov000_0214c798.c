#include "ffc/types.h"

int func_ov000_0214c798(uint16_t *a, uint16_t *b, int n)
{
    int i;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] > b[i]) {
            return 1;
        }
        if (a[i] < b[i]) {
            return -1;
        }
    }
    return 0;
}
