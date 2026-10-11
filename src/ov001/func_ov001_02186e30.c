#include "ffc/types.h"

int func_ov001_02186e30(int8_t *s, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (s[i] == 0) {
            return i + 1;
        }
    }
    return -1;
}
