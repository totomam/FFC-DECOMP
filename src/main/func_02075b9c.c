#include "ffc/types.h"

extern int32_t func_020738a0(void *a);
extern int32_t func_02073824(void *a);

int32_t func_02075b9c(uint8_t *p) {
    if (func_020738a0(*(void **)(*(uint8_t **)(p + 0x40) + 0x2c)) != 0) {
        return func_02073824(*(void **)(*(uint8_t **)(p + 0x40) + 0x2c));
    }
    return 0;
}
