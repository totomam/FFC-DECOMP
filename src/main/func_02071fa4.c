#include "ffc/types.h"

extern uint32_t func_ov000_02154e58(void *object);

uint32_t func_02071fa4(void *object) {
    return func_ov000_02154e58(*(void **)((uint8_t *)object + 8)) != 0;
}
