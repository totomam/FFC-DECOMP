#include "ffc/types.h"

extern int8_t *data_ov001_021918a4;

void func_ov001_0217f468(int8_t *buf, int32_t n)
{
    int8_t *p = data_ov001_021918a4;
    int32_t i;

    for (i = 0; i < n; i++) {
        buf[i] ^= *p++;
        if (*p == 0) {
            p = data_ov001_021918a4;
        }
    }
}
