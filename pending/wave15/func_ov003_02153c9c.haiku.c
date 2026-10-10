#include "ffc/types.h"

extern uint32_t func_02024d58(uint32_t x);

uint32_t func_ov003_02153c9c(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0x1E4);
    if (q) {
        return func_02024d58(*(uint32_t *)(q + 0x34));
    }
    return 0;
}
