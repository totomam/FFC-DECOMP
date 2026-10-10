#include "ffc/types.h"

extern uint32_t func_02024d58(uint32_t x);

uint32_t func_ov003_02153c9c(uint32_t *p) {
    uint32_t *q = (uint32_t *)p[0x79];
    if (q != 0) {
        return func_02024d58(q[0xD]);
    }
    return 0;
}
