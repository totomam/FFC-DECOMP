/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t x, y, z; } V3;
typedef struct { V3 v; uint32_t w; } V4;

void func_0208053c(V3 *s, V4 *d) {
    V4 *e = d + 3;
    do {
        d->v = *s; d->w = 0;
        s++; d++;
    } while (d != e);
    d->v = *s; d->w = 0x1000;
}
