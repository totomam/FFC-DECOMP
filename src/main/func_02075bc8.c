#include "ffc/types.h"

extern int32_t func_02073898(void *a);
extern int32_t func_02073844(void *a);

int32_t func_02075bc8(uint8_t *p) {
    if (func_02073898(*(void **)(*(uint8_t **)(p + 0x40) + 0x2c)) != 0) {
        return func_02073844(*(void **)(*(uint8_t **)(p + 0x40) + 0x2c));
    }
    return 0;
}
