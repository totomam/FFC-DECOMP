#include "ffc/types.h"

extern int32_t func_ov000_021460b4(uint8_t *p, uint32_t n, uint8_t *s, uint32_t k);
extern void func_020870e8(void);
extern uint16_t data_ov000_0216bc60[];

int32_t func_ov000_02147ba0(uint8_t *p, uint32_t n, uint8_t *s, uint32_t flag)
{
    uint32_t mask;
    uint32_t r7;
    uint32_t r4;
    uint32_t prev, acc, cur, chk;

    r7 = flag ? 1 : *(uint16_t *)(s + 0x38);
    prev = *(uint32_t *)(s + 0x40);
    acc = prev * 2 + 4;
    mask = 1;

    while (n != 0 && *(uint8_t *)(s + 8) == 4) {
        r4 = *(uint16_t *)(s + 0x3a);
        if (r4 >= r7) {
            r4 = r7;
        }
        if (data_ov000_0216bc60[2] < r4) {
            r4 = data_ov000_0216bc60[2];
        }
        if (flag == 0) {
            r4 &= ~mask;
        }
        if (n < r4) {
            r4 = n;
        }
        cur = *(uint32_t *)(s + 0x40);
        acc += cur - prev;
        prev = cur;
        chk = acc;
        acc = acc - 1;
        if (chk == 0) {
            r4 = 0;
        }
        if (r4 == 0) {
            break;
        }
        r4 = func_ov000_021460b4(p, r4, s, 0x18);
        func_020870e8();
        p += r4;
        r7 -= r4;
        n -= r4;
    }
    return r4;
}
