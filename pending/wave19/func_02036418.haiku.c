#include "ffc/types.h"

extern uint32_t func_020363d8(const void *object);
extern uint32_t func_020363bc(const void *object);
extern uint8_t func_02036360(const void *object);

uint32_t func_02036418(const void *object) {
    if (func_020363d8(object) != 0) {
        const uint8_t *p = (const uint8_t *)func_020363bc(object);
        return *(const uint16_t *)(p + 0x38);
    }
    return func_02036360(object);
}
