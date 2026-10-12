#include "ffc/types.h"

extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, const void *d);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov001_02185228(uint8_t *p, uint32_t x);
extern const uint8_t data_ov001_021936cc[];
extern uint8_t *data_ov001_021926dc;
extern const uint8_t data_ov001_021936e8[];
extern const uint8_t data_ov001_02193720[];

void func_ov001_02184030(uint8_t *a) {
    uint8_t *p = a;
    uint32_t t;

    func_ov000_021652a8(3, 4, 0x40, data_ov001_021936cc);
    if (a == 0) {
        p = data_ov001_021926dc;
    }
    if (*(uint32_t *)(p + 0xc4) == 0) {
        func_ov000_021652a8(3, 4, 4, data_ov001_021936e8);
        return;
    }
    t = func_ov000_0216591c();
    if (t - *(uint32_t *)(p + 0xb4) < 0x2710) {
        func_ov000_021652a8(3, 4, 8, data_ov001_02193720);
        *(uint32_t *)(p + 0xbc) = 1;
    } else {
        func_ov001_02185228(p, 1);
        *(uint32_t *)(p + 0xbc) = 0;
    }
}
