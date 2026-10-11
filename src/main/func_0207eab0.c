#include "ffc/types.h"

extern int32_t func_0207e0f4(void *self, int32_t a, int32_t b, void *p);

int32_t func_0207eab0(uint8_t *self, int32_t a, int32_t b) {
    int32_t buf[2];
    int32_t one = 1;
    *(int32_t **)(self + 0x10) = buf;
    buf[0] = a;
    buf[1] = b;
    if (func_0207e0f4(self, 0, 1, buf) != 0) {
        b = buf[1];
    } else {
        b = one - 2;
        if (*(int32_t *)(self + 0x14) != 6) b = buf[1];
    }
    return b;
}
