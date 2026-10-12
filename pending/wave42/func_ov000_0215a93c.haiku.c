#include "ffc/types.h"

extern void func_ov000_02155f28(void);
extern int func_ov000_02155fa0(void);
extern int func_ov000_02155fac(void);
extern void func_ov000_02155fc4(void *a, void *b);
extern void func_ov000_02155ffc(void);
extern int func_ov000_02155234(uint32_t v);
extern void func_ov000_0215a81c(void (*f)(void), int n);
extern uint64_t func_ov000_02156004(void);
extern void func_ov000_02154e14(void *p, uint32_t lo, uint32_t hi);
extern int32_t func_ov000_02155fb8(void);
extern void func_ov000_0215a64c(int n);
extern void func_ov000_0215a70c(void);
extern uint8_t *data_ov000_02170060;

void func_ov000_0215a93c(void)
{
    uint64_t r;
    int32_t v;

    func_ov000_02155f28();
    if (!func_ov000_02155fa0()) {
        return;
    }
    if (func_ov000_02155fac()) {
        uint8_t *p = data_ov000_02170060;
        func_ov000_02155fc4(p + 0x48, p + 0x148);
        func_ov000_02155ffc();
        if (func_ov000_02155234(*(uint32_t *)(data_ov000_02170060 + 0x1c))) {
            func_ov000_0215a81c(func_ov000_0215a70c, 2);
        } else {
            r = func_ov000_02156004();
            func_ov000_02154e14(data_ov000_02170060 + 0x3c, (uint32_t)r, (uint32_t)(r >> 32));
            func_ov000_0215a81c(func_ov000_0215a70c, 3);
        }
    } else {
        int32_t lim = (int32_t)0xffff8eb8;
        v = func_ov000_02155fb8();
        if (v > lim) {
            func_ov000_0215a64c(2);
        } else {
            func_ov000_0215a64c(9);
        }
    }
}
