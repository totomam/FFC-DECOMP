#include "ffc/types.h"

void func_02020ec4(uint32_t *out, uint32_t mode, uint32_t *in) {
    uint32_t hi;
    switch (mode) {
    case 0:
        out[0] = 0;
        out[1] = 0;
        break;
    case 1:
        out[0] = in[0] << 3;
        out[1] = 0;
        break;
    case 2:
        hi = in[1] << 3;
        out[0] = 0;
        out[1] = hi;
        break;
    case 3:
        hi = in[1] << 3;
        out[1] = hi;
        out[0] = in[0] << 3;
        break;
    case 4:
        hi = in[1] << 2;
        out[1] = hi;
        out[0] = in[0] << 2;
        break;
    case 5:
        out[0] = in[0] << 2;
        out[1] = 0;
        break;
    case 6:
        hi = in[1] << 3;
        out[1] = hi;
        out[0] = in[0] << 2;
        break;
    default:
        out[0] = 0;
        out[1] = 0;
        break;
    }
}
