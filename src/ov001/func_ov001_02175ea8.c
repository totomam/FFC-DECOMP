#include "ffc/types.h"

extern int func_ov001_0217c8f0(void *a, void *b, void **out);

int func_ov001_02175ea8(void *a, void *b)
{
    void *out;
    void *r3;

    if (a == 0) {
        goto ret0;
    }
    r3 = *(void **)a;
    if (r3 == 0) {
ret0:
        return 0;
    }
    if (*(uint32_t *)((uint8_t *)r3 + 0x108) != 0) {
        return 0;
    }
    if (func_ov001_0217c8f0(a, b, &out) != 0) {
        if (((void **)out)[2] != 0) {
            return 1;
        }
    }
    if (func_ov001_0217c8f0(a, b, &out) != 0) {
        if (((void **)out)[3] != 0) {
            return 1;
        }
    }
    return 0;
}
