#include "ffc/types.h"

typedef struct {
    uint8_t b[2];
} Pair;

extern int func_0208f800(uint8_t c, void *p);

int func_0209831c(uint8_t *self, Pair v)
{
    uint8_t buf[2];
    int i;
    buf[0] = v.b[0];
    buf[1] = v.b[1];
    for (i = 0; i < 2; i++) {
        if (func_0208f800(buf[i], *(void **)(self + 0x1c)) == -1) {
            return -1;
        }
    }
    return 0;
}
