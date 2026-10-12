#include "ffc/types.h"

typedef struct {
    uint8_t b[12];
} Blob;

extern int func_0208f800(uint8_t c, void *p);

int func_0209831c(uint8_t *self, Blob v)
{
    uint8_t *s = (uint8_t *)&v;
    uint8_t buf[12];
    uint8_t *d = buf;
    int i;
    d[0] = s[0];
    d[1] = s[1];
    for (i = 0; i < 2; i++) {
        if (func_0208f800(d[i], *(void **)(self + 0x1c)) == -1) {
            return -1;
        }
    }
    return 0;
}
