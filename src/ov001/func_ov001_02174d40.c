#include "ffc/types.h"

extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, uint32_t *d);
extern uint32_t func_ov001_021743a8(uint8_t *p);
extern void func_ov001_02173a60(uint8_t *p);
extern uint32_t func_ov000_021655ac(uint32_t a, uint32_t *b, uint32_t c, uint32_t d);
extern void func_ov001_02171e6c(uint8_t *p, uint32_t a, uint32_t b);
extern void func_ov001_02171e9c(uint8_t *p);
extern uint32_t data_ov001_0218ff8c[];

void func_ov001_02174d40(uint8_t *p)
{
    uint32_t idx;
    uint32_t r6;
    uint32_t r7;
    uint32_t sp0;

    idx = 0x170;
    func_ov000_021652a8(8, 3, 0x10, data_ov001_0218ff8c);
    r7 = *(uint32_t *)(p + idx);
    r6 = func_ov001_021743a8(p);
    if (r6 == 0) {
        idx = 0;
        sp0 = idx;
        func_ov001_02173a60(p);
        if (func_ov000_021655ac(*(uint32_t *)(p + 0x50), &sp0, 0, 0) == 1 && sp0 != 0) {
            *(uint32_t *)(p + 0x10) = 8;
            func_ov001_02171e6c(p, idx, idx);
        }
        return;
    }
    if (r6 == 3) {
        *(uint32_t *)(p + idx + 0x10) = 0;
        return;
    }
    if (r7 != *(uint32_t *)(p + idx)) {
        func_ov001_02171e9c(p);
    }
    if (r6 == 1) {
        func_ov001_02173a60(p);
        *(uint32_t *)(p + 0x184) = 1;
        *(uint32_t *)(p + 0x10) = 7;
        func_ov001_02171e6c(p, 0, 0);
    }
}
