#include "ffc/types.h"

int func_020891f4(int a, int b) {
    uint32_t m = 1u << a;
    uint32_t *base = (uint32_t *)0x02fffc00;
    uint32_t v = (base + b)[0xe2];
    if (v & m) {
        return 1;
    }
    return 0;
}
