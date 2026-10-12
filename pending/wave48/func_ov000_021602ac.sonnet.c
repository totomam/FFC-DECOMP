#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern uint64_t func_020882cc(void);
extern void func_ov000_02163758(void);
extern void func_ov000_0216335c(int x);
extern void func_ov000_0215e584(int x);
extern int func_ov000_02161a1c(void);
extern void func_ov000_021600bc(int a, int b, int c);
extern int func_ov000_0215fed0(void);
extern void func_ov000_0215dbd8(int a, int b);

int func_ov000_021602ac(int a)
{
    uint8_t *p;
    uint32_t off;
    uint32_t lo, hi;
    uint64_t r;

    off = 0x67c;
    p = func_ov000_02163350();
    *(uint32_t *)(p + off) = 0;
    p = func_ov000_02163350();
    *(uint8_t *)(p + off - 0x54) = 0;
    r = func_020882cc();
    lo = (uint32_t)r;
    hi = (uint32_t)(r >> 32);
    p = func_ov000_02163350();
    *(uint32_t *)(p + off - 0x34) = lo;
    *(uint32_t *)(p + off - 0x30) = hi;
    func_ov000_02163758();

    p = func_ov000_02163350();
    if (*(uint32_t *)(p + 0x798) != 0) {
        func_ov000_0216335c(12);
        func_ov000_0215e584(0);
        if (func_ov000_02161a1c() != 0) return 0;
        goto ok;
    }
    p = func_ov000_02163350();
    if (*(uint8_t *)(p + 0x15) == 0) {
        func_ov000_0216335c(2);
        if (a != 0) {
            p = func_ov000_02163350();
            *(uint32_t *)(p + off - 0x98) = 1;
            r = func_020882cc();
            lo = (uint32_t)r;
            hi = (uint32_t)(r >> 32);
            p = func_ov000_02163350();
            *(uint32_t *)(p + off - 0x94) = lo;
            *(uint32_t *)(p + off - 0x90) = hi;
            goto ok;
        }
        func_ov000_0215e584(0);
        if (func_ov000_02161a1c() != 0) return 0;
        goto ok;
    }
    p = func_ov000_02163350();
    if (*(uint8_t *)(p + 0x15) == 1) {
        func_ov000_021600bc(1, 0, a);
        if (func_ov000_0215fed0() != 0) return 0;
        goto ok;
    }
    p = func_ov000_02163350();
    if (*(uint8_t *)(p + 0x15) == 3) {
        func_ov000_0215dbd8(6, (int)0xfffec5e6);
        return 0;
    }
ok:
    return 1;
}
