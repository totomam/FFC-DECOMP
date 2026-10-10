#include "ffc/types.h"

extern uint32_t func_ov000_02155240(void *object);

uint32_t func_02071f90(void *object) {
    return func_ov000_02155240(*(void **)((uint8_t *)object + 8)) != 0;
}
