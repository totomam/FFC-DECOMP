#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t);
extern uint8_t func_ov000_02152ce0(uint8_t);

void func_ov000_02152b20(uint8_t a) {
    uint8_t *p = func_ov000_02152ae4(1);
    uint8_t *q = func_ov000_02152ae4(0x10);
    p[9] = a;
    if (a < 0x10 && a > p[0x16]) {
        p[0x16] = a;
        if (a > 7) {
            p[0x15] = func_ov000_02152ce0(q[0x14bd]);
            {
                uint8_t *r = q + (q[0x14bd + 6] << 2);
                p[0x14] = r[0xbf4];
            }
        }
    }
}
