#include "ffc/types.h"

extern uint32_t func_ov000_021653d4(uint32_t x);

int func_ov001_0217fddc(uint32_t *p, uint32_t v) {
    uint32_t r = func_ov000_021653d4(v);
    p[0] = r;
    if (r == 0) {
        return 0;
    }
    p[1] = v;
    return 1;
}
