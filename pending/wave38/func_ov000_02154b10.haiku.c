#include "ffc/types.h"

extern void *func_ov000_02152ae4(int x);
extern uint32_t func_ov000_02157310(void);
extern uint8_t func_ov000_02152ce0(uint8_t x);
extern uint32_t func_ov000_02157338(void);
extern void func_ov000_02157240(void);
extern uint32_t data_ov000_0216bcac;

int func_ov000_02154b10(uint8_t *p) {
    uint8_t *r4 = (uint8_t *)func_ov000_02152ae4(1);
    uint32_t r6 = func_ov000_02157310();
    uint32_t v;
    if (r6 != 0) {
        if (r4[0x15] == func_ov000_02152ce0(p[0x14bd])) {
            *(uint32_t *)(r4 + 0x10) = func_ov000_02157338();
        }
        func_ov000_02157240();
        if (r6 != 0xb) {
            *(uint8_t *)(p + p[0x14c3] * 4 + 0xbf4) = 1;
            v = r4[0xb];
            if (data_ov000_0216bcac == 4) {
                v &= ~0xf0u;
                v |= 0x10;
                r4[0xb] = (uint8_t)v;
            } else {
                v &= ~0xf0u;
                r4[0xb] = (uint8_t)v;
            }
            return 0xb;
        }
        return 0xf;
    }
    return 0xe;
}
