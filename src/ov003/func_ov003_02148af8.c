#include "ffc/types.h"

extern uint32_t func_ov003_02153cd0(uint32_t);

uint32_t func_ov003_02148af8(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0x9c);
    if (v) {
        return func_ov003_02153cd0(v);
    }
    return 0;
}
