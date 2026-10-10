#include "ffc/types.h"

extern int func_02024de4(void *p);

int func_ov003_02153cb4(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0x1e4);
    if (q) {
        return func_02024de4(*(void **)(q + 0x34));
    }
    return 0x171717;
}
