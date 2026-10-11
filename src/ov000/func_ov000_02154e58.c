#include "ffc/types.h"
extern uint32_t func_ov000_02154e78(void *object);
extern uint32_t func_ov000_02154ea0(void *object);

uint32_t func_ov000_02154e58(void *object) {
    if (func_ov000_02154e78(object) != 0 && func_ov000_02154ea0(object) != 0) {
        return 1;
    }
    return 0;
}
