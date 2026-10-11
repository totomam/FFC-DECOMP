#include "ffc/types.h"

extern uint8_t *func_020615ac(void *a, uint32_t b);

void func_02061544(uint32_t *out, void *a, uint32_t b) {
    uint8_t *p = func_020615ac(a, b);
    uint32_t hi;
    uint32_t lo;
    if (p == 0) {
        out[0] = 0;
        out[1] = 0;
        return;
    }
    hi = p[1];
    lo = p[0];
    out[0] = lo;
    out[1] = hi;
}
