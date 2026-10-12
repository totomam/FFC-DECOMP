#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(int);
extern uint32_t func_ov000_02152ce0(uint32_t);
extern int func_02087460(void);
extern void func_02084ca4(void *src, void *dst, uint32_t n);

void func_ov000_02152c00(uint32_t a)
{
    uint8_t *r4 = func_ov000_02152ae4(1);
    uint8_t *r5 = func_ov000_02152ae4(0x10);
    uint32_t r6 = func_ov000_02152ce0(a);

    if (r6 >= 10 && r6 <= 12 && func_02087460() != 0) {
        r6 = (uint8_t)(r6 - 10) << 9;

        r4[0x24] = (r5 + r6)[0x482];
        r4[0x25] = (r5 + r6)[0x483];
        *(uint16_t *)(r4 + 0x26) = *(uint16_t *)(r5 + r6 + 0x4e8);
        func_02084ca4(r5 + r6 + 0x484, r4 + 0x28, 0x64);
        func_02084ca4(r5 + r6 + 0x300, r4 + 0x8c, 0x20);
        func_02084ca4(r5 + r6 + 0x320, r4 + 0xac, 0x20);

        if ((uint8_t)(r5[r6 + 0x3e7] + 0xf0) > 3) {
            r4[0x23] = r5[r6 + 0x3e6] & 3;
        } else {
            r4[0x23] = r5[r6 + 0x481];
        }
        return;
    }

    if ((uint8_t)(a + 0xee) <= 1) {
        r4[0x23] = 2;
        return;
    }
    r4[0x23] = r5[(r6 << 8) + 0xe6] & 3;
}
