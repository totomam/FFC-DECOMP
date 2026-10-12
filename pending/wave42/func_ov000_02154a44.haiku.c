#include "ffc/types.h"

extern int func_ov000_0214ef60(uint8_t *p);
extern void func_ov000_02154d48(uint8_t *p);
extern uint32_t func_ov000_02152ce0(uint8_t x);
extern int func_02087460(void);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint32_t b, uint32_t c);

int func_ov000_02154a44(uint8_t *p)
{
    uint32_t v;
    uint64_t t;
    uint32_t flag;

    if (func_ov000_0214ef60(p) != 0) {
        func_ov000_02154d48(p);
        flag = p[0x14bc];
        if (((flag << 27) >> 31) == 1) {
            return 15;
        }
        v = func_ov000_02152ce0(p[0x14bd]);
        if (v >= 10 && v <= 12) {
            if (func_02087460() != 0) {
                uint8_t *q = p + ((uint8_t)(v - 10) << 9);
                if (q[0x482] != 0) {
                    return 15;
                }
            }
        }
        return 13;
    } else {
        t = func_020882cc();
        t -= *(uint64_t *)(p + 0x1460);
        t = func_0209a6d4(t << 6, 0x1ff6210, 0);
        if (t >= 10) {
            uint8_t idx2 = p[0x14c3];
            *(uint8_t *)(p + ((uint32_t)idx2 << 2) + 0xbf4) = 1;
            return 11;
        }
        return 12;
    }
}
