/* cflags: -O1 */
#include "ffc/types.h"
void func_ov009_0219bc34(uint8_t *p, int32_t v, ...)
{
    volatile int32_t buf[6];
    int ok = 1;
    int z = 0;
    int32_t *q = &v;
    if (*q >= z && 0x64000 > *q) ok = z;
    if (ok == 0) {
        *(int32_t *)(p + 0x200) = *q;
    }
}
