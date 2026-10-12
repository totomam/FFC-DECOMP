#include "ffc/types.h"

extern uint32_t func_02087508(void *a, void *out, uint32_t b);
extern void func_02087874(void *p, uint32_t v);
extern void func_02087570(void *a, void *p, uint32_t v);
extern uint8_t data_02143598[];

uint32_t func_0208cde8(void)
{
    uint16_t *p;
    uint32_t ret = 0;
    uint32_t k = 2;
    if (func_02087508(data_02143598, &p, 0) == 0) {
        return ret;
    }
    func_02087874(p, k);
    if (!(*p & (k << 14))) {
        func_02087570(data_02143598, p, 1);
        return ret;
    }
    return (uint32_t)p;
}
