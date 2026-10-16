/* cflags: -nothumb */
#include "ffc/types.h"
void func_020800a8(int32_t *m) {
    int32_t a = 0x1000, z = 0;
    m[8] = a;
    int i;
    for (i = 0; i < 2; i++) { m[0]=a; m[1]=z; m[2]=z; m[3]=z; m += 4; }
}
