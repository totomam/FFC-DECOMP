#include "ffc/types.h"

extern int func_ov000_0215355c(int x);
extern uint8_t func_ov000_021544e8(void);
extern int func_ov000_0215426c(void *p, int v);
extern int func_ov000_02153f7c(void *p);

int func_ov000_021543c8(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (*(uint16_t *)(b + 0x14c6) != 0) {
        if (func_ov000_0215355c(2) == 1) {
            b[0x14c1] = func_ov000_021544e8();
            if ((int8_t)b[0x14c1] < 0) {
                b[0x14c5] = 0;
                return func_ov000_0215426c(b, 5);
            }
            return 5;
        }
    }
    {
        uint32_t f = ((uint32_t)b[0x14bb] << 24) >> 28;
        if (f < 1) {
            return func_ov000_02153f7c(b);
        }
    }
    return 6;
}
