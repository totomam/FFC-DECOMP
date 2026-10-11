#include "ffc/types.h"

extern int32_t func_ov001_0218e124(void *p);

int func_ov001_0218b90c(uint8_t *p) {
    if (func_ov001_0218e124(p)) {
        if (*(uint32_t *)(p + 0xf0) != 2) {
            return 1;
        }
    }
    return 0;
}
