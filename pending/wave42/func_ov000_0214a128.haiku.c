#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_ov000_0214976c(uint8_t *p);

void func_ov000_0214a128(uint8_t *p5, uint8_t *p6)
{
    uint8_t r4;
    uint8_t r7;
    uint8_t *q;

    func_02084ca4(p6 + 2, p5 + 0x54, 0x20);
    r4 = p6[0x22];
    r7 = p5[0x30];
    q = p6 + 0x23;
    if (r7 != 0 && r4 == 0x20 && func_02090410(p5 + 0x74, q, 0x20) == 0) {
        p5[0x31] = 1;
    } else {
        if (r7 != 0) {
            func_ov000_0214976c(p5);
        }
        if (r4 == 0) {
            p5[0x30] = 0;
        } else {
            func_02084ca4(q, p5 + 0x74, 0x20);
            p5[0x30] = 1;
        }
        p5[0x31] = 0;
    }
    *(uint16_t *)(p5 + 0x32) = (uint16_t)((q[r4] << 8) + q[r4 + 1]);
    if (*(uint16_t *)(p5 + 0x32) == 4 || *(uint16_t *)(p5 + 0x32) == 5) {
        p5[0x455] = 2;
    } else {
        p5[0x455] = 9;
    }
}
