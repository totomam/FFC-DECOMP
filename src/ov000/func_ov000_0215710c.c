#include "ffc/types.h"

extern void *func_ov000_021570d4(void *a, void *b);
extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_ov000_02158e6c(void *p, uint32_t len, uint8_t *buf, uint32_t max);

int32_t func_ov000_0215710c(void *a, void *b, uint8_t *buf, uint32_t max)
{
    void *p = func_ov000_021570d4(a, b);
    if (p == 0) {
        return 0;
    }
    uint32_t len = func_02092864(p);
    int32_t r = func_ov000_02158e6c(p, len, buf, max);
    if (r != -1 && (uint32_t)r < max) {
        buf[r] = 0;
    }
    return r;
}
