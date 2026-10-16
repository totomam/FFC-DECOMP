#include "ffc/types.h"
extern uint32_t func_ov000_0214e90c(void);
int func_ov000_0214f168(int a, uint32_t *out) {
    uint32_t v = func_ov000_0214e90c();
    if (v == 0) return 0;
    if (out != 0) {
        uint32_t t3 = (v << 24) & 0xff000000;
        uint32_t t2 = (v << 8) & 0x00ff0000;
        uint32_t t1 = (v >> 8) & 0xff00;
        uint32_t t0 = (uint8_t)(v >> 24);
        *out = t0 | t1 | t2 | t3;
    }
    return 1;
}
