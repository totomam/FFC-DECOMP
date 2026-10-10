#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t, uint32_t);

void func_02074f58(uint32_t a, uint32_t b, uint32_t c, uint8_t *p) {
    fn_t f = *(fn_t *)(p + 0x4254);
    if (f) {
        f(a, b, c, *(uint32_t *)(p + 0x4258));
    }
}
