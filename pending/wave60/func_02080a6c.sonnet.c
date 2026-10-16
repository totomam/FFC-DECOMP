/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } T;
typedef struct { T r[4]; } M;
void func_02080a6c(uint32_t *s, M *d) {
    T *p = d->r;
    int i;
    for (i = 0; i < 4; i++) {
        *p++ = *(T*)s;
        s += 4;
    }
}
