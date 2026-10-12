#include "ffc/types.h"

extern void func_02081c40(void *p);
extern void func_02081c54(void *p);
extern void func_02081c68(void *p);
extern void func_02023fd8(void *p);
extern uint32_t func_020241ec(void *p);
extern void func_02024288(void *p);
extern void func_020243bc(void *p, void *q);

void func_0202413c(void *self, void *arg)
{
    uint8_t *s = (uint8_t *)self;
    volatile uint32_t *hw = (volatile uint32_t *)0x4000440;

    if ((*(uint32_t *)(s + 8) & 3) != 3) {
        return;
    }
    if (*(void **)(s + 0x2d8) != 0) {
        hw[0] = 0;
        hw[1] = 0;
        func_02081c40(*(void **)(s + 0x2d8));
    }
    hw[0] = 2;
    hw[1] = 0;
    if (*(void **)(s + 0x2d4) != 0) {
        func_02081c54(*(void **)(s + 0x2d4));
    }
    if (*(void **)(s + 0xd0) != 0) {
        func_02081c68(*(void **)(s + 0xd0));
    }
    if (*(uint32_t *)(s + 0xc) == 1) {
        func_02023fd8(s);
    }
    func_02081c68(s + 0x60);
    if (func_020241ec(s) != 0) {
        func_02024288(s);
        if (*(void **)(s + 0x1c) != 0 && s[0x1d2] != 0) {
            func_020243bc(s, arg);
        }
    }
    volatile uint32_t *hw2 = (volatile uint32_t *)0x4000448;
    *hw2 = 1;
    if (*(void **)(s + 0x2d8) != 0) {
        hw[0] = 0;
        *hw2 = 1;
    }
}
