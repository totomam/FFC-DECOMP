/* cflags: -nothumb */
#include "ffc/types.h"

void func_02080514(uint64_t *p) {
    uint64_t a = 0x1000, z = 0;
    int i;
    for (i = 0; i < 3; i++) { *p++ = a; *p++ = z; }
}
