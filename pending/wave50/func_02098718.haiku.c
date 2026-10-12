#include "ffc/types.h"

extern int64_t func_0209a71c(int64_t first, int64_t second);

typedef struct {
    void **vtbl;
    uint8_t pad[0x30];
    int32_t n34;
    uint8_t pad2[2];
    uint8_t f3a;
} Self;

void func_02098718(uint32_t *out, Self *self, int64_t a, uint32_t t0, uint32_t t1)
{
    int32_t mode;
    int64_t x;
    int64_t res;
    int32_t n;

    if (self->f3a != 0) {
        if ((uint8_t)(t1 & 0x18) != 0) {
            if (a == 0 || self->n34 > 0) {
                if (((int32_t (*)(Self *))self->vtbl[5])(self) >= 0) {
                    if ((uint8_t)t0 == 1) {
                        mode = 0;
                    } else if ((uint8_t)t0 == 2) {
                        mode = 1;
                    } else if ((uint8_t)t0 == 4) {
                        mode = 2;
                    } else {
                        goto fail;
                    }
                    n = self->n34;
                    if (n <= 0) {
                        n = 0;
                    }
                    x = func_0209a71c((int64_t)n, a);
                    res = ((int64_t (*)(Self *, int64_t, int32_t))self->vtbl[15])(self, x, mode);
                    if (res >= 0) {
                        out[0] = (uint32_t)res;
                        out[1] = (uint32_t)(res >> 32);
                        out[2] = 0;
                        return;
                    }
                }
            }
        }
    }

fail:
    out[0] = 0xffffffff;
    out[1] = 0xffffffff;
    out[2] = 0;
}
