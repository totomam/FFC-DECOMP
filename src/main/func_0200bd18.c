#include "ffc/types.h"

extern uint32_t func_0200cd28(void *object, uint32_t a, uint32_t b, uint32_t c, uint32_t fifth);

uint32_t func_0200bd18(void *object, uint32_t value, uint32_t b, uint32_t c) {
    return func_0200cd28(object, value, b, c, value);
}
