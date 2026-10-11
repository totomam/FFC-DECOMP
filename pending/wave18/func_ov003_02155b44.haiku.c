#include "ffc/types.h"

extern int func_ov003_0215630c(void *p);

void func_ov003_02155b44(uint32_t *out, uint8_t *p) {
    if (func_ov003_0215630c(p)) {
        *out = 0;
        return;
    }
    *out = *(uint32_t *)(*(uint8_t **)(p + 0xa8) + 0x1c);
}
