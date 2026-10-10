#include "ffc/types.h"

extern uint32_t func_0200960c(void *object, uint32_t a, uint32_t b, uint32_t c, uint32_t fifth);

uint32_t func_02008f2c(void *object, uint32_t value, uint32_t b, uint32_t c) {
    return func_0200960c(object, value, b, c, value);
}
