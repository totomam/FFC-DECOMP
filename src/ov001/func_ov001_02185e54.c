#include "ffc/types.h"

extern void *func_ov000_02168b44(void *p, uint32_t *key);
extern uint32_t func_02092864(const uint8_t *text);

uint32_t func_ov001_02185e54(uint32_t *ctx, uint32_t key, uint32_t def)
{
    uint32_t local[2];
    uint32_t *r;
    uint32_t t;

    if (ctx == 0) {
        return 0;
    }
    local[0] = key;
    r = (uint32_t *)func_ov000_02168b44((void *)ctx[6], local);
    if (r == 0 || func_02092864((const uint8_t *)(t = r[1])) == 0) {
        return def;
    }
    return t;
}
