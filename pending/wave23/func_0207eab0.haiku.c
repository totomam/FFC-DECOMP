#include "ffc/types.h"

extern int32_t func_0207e0f4(void *self, int32_t a, int32_t b, void *p, int32_t c, int32_t d);

int32_t func_0207eab0(uint8_t *self, int32_t a, int32_t b) {
    int32_t buf[2];
    int32_t r;
    int32_t ret;
    buf[0] = a;
    buf[1] = b;
    *(int32_t **)(self + 0x10) = buf;
    r = func_0207e0f4(self, 0, 1, buf, a, b);
    if (r == 0) {
        if (*(int32_t *)(self + 0x14) == 6) {
            ret = 1;
            return ret - 2;
        }
    }
    return buf[1];
}
