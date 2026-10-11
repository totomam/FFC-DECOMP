#include "ffc/types.h"

extern int32_t func_ov003_0215b54c(void *p);
extern void *func_ov003_0215b560(void *p, int16_t a, uint16_t b);

uint16_t func_ov003_0215b600(void *p)
{
    uint8_t *s = (uint8_t *)p;
    if (func_ov003_0215b54c(p)) {
        void *r = func_ov003_0215b560(p, *(int16_t *)(s + 0x35c), *(uint16_t *)(s + 0x35e));
        if (r) {
            return *(uint16_t *)((uint8_t *)r + 2);
        }
    }
    return *(uint16_t *)(s + 0xbe);
}
