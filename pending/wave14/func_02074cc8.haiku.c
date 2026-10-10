#include "ffc/types.h"

extern uint32_t func_02074cf8(void *p, void *q, uint32_t a, uint32_t b, uint32_t c);

uint32_t func_02074cc8(void *p, uint32_t a, uint32_t b, uint32_t c) {
    return func_02074cf8(p, (uint8_t *)p + 0x130, a, b, c);
}
