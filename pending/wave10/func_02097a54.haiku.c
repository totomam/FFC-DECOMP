#include "ffc/types.h"

extern int32_t func_02097a98(void *p);
extern void func_02097a18(void *p);

int32_t func_02097a54(void *p) {
    uint8_t *s = (uint8_t *)p;

    *(uint32_t *)(s + 0x28) = *(uint32_t *)(s + 0x14);
    if (func_02097a98(p) == -1) {
        return -1;
    }
    if (s[0x38]) {
        func_02097a18(p);
    } else {
        *(uint32_t *)(s + 0x04) = 0;
        *(uint32_t *)(s + 0x08) = 0;
        *(uint32_t *)(s + 0x0c) = 0;
        *(uint32_t *)(s + 0x14) = 0;
        *(uint32_t *)(s + 0x10) = 0;
        *(uint32_t *)(s + 0x18) = 0;
        *(uint32_t *)(s + 0x2c) = 0;
        *(uint32_t *)(s + 0x28) = 0;
        *(uint32_t *)(s + 0x24) = 0;
    }
    return 0;
}
