/* cflags: -nothumb */
#include "ffc/types.h"
void func_02004a00(uint32_t v, int p, int n) {
    int e = p + n;
    do { if (p >= e) return; *(uint32_t *)p = v; p += 4; } while (1);
}
