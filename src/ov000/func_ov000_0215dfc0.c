#include "ffc/types.h"

typedef uint64_t Pair64;

extern int32_t func_ov000_0215b594(void);
extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_0215dbd8(int32_t a, int32_t b);
extern void func_ov001_021832d4(uint32_t x);
extern int32_t func_ov000_02163408(void);
extern void func_ov001_021807e8(uint32_t x);
extern uint32_t func_ov000_0216335c(int32_t x);
extern Pair64 func_020882cc(void);
extern void func_ov000_02160d04(int32_t x);

int32_t func_ov000_0215dfc0(int32_t param_a, int32_t param_b)
{
    uint8_t *p;

    if (func_ov000_0215b594() != 4) {
        return 0;
    }
    p = func_ov000_02163350();
    if (p[0x14] == 2) {
        return 1;
    }
    if (param_a != 0) {
        func_ov000_0215dbd8(param_a, param_b - 0x13880);
        return 1;
    }
    if (func_ov000_02163350()[0x62a] == 1 || func_ov000_02163350()[0x629] == 1) {
        return 1;
    }
    p = func_ov000_02163350();
    if (*(uint32_t *)(p + 0x618) != 0) {
        func_ov001_021832d4(*(uint32_t *)(func_ov000_02163350() + 0x618));
        p = func_ov000_02163350();
        *(uint32_t *)(p + 0x618) = 0;
    }
    if (func_ov000_02163408() > 1) {
        p = func_ov000_02163350();
        if (p[0x629] == 0) {
            func_ov000_02163350()[0x629] = 2;
            func_ov001_021807e8(*(uint32_t *)(*(uint32_t *)(func_ov000_02163350() + 4)));
        }
    } else {
        p = func_ov000_02163350();
        if (p[0x15] == 3) {
            func_ov000_0215dbd8(0x16, (int32_t)0xfffec5d2);
        } else {
            p = func_ov000_02163350();
            if (*(uint32_t *)(p + 0x61c) == 1) {
                uint32_t lo, hi;
                func_ov000_0216335c(0x15);
                {
                    Pair64 r = func_020882cc();
                    lo = (uint32_t)r;
                    hi = (uint32_t)(r >> 32);
                }
                p = func_ov000_02163350();
                *(uint32_t *)(p + 0x668) = lo;
                *(uint32_t *)(p + 0x66c) = hi;
            } else {
                func_ov000_02160d04(1);
            }
        }
    }
    return 1;
}
