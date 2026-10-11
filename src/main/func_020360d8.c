#include "ffc/types.h"

extern uint32_t func_02035ff4(void *object);
extern uint32_t func_0203608c(void *object);

uint32_t func_020360d8(void *object) {
    uint32_t r;
    if (func_02035ff4(object) == 0) {
        return 0;
    }
    r = func_0203608c(object);
    if (r == 0x14) {
        return 0;
    }
    return r + 1;
}
