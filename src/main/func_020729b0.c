#include "ffc/types.h"

extern uint32_t func_ov000_0215b490(void);
extern void func_ov000_0215b37c(void);
extern void func_02056c4c(void *p);

typedef void (*func_020729b0_cb)(int, int, int, int, int, int);

void func_020729b0(int a, int b, int c, int d, int e, volatile uint8_t *objp)
{
    if (a == 0) {
        uint8_t *obj = (uint8_t *)objp;
        func_020729b0_cb fn = *(func_020729b0_cb *)(obj + 0x98);
        if (fn != 0) {
            fn(a, b != 0, c != 0, d != 0, e, *(int *)(obj + 0x9c));
        }
        {
            uint32_t r = func_ov000_0215b490();
            if (b != 0) {
                func_ov000_0215b37c();
                *(int *)(obj + 0xa0) = 3;
                return;
            }
            if (r == *(uint32_t *)(obj + 0x84)) {
                func_02056c4c(obj + 0x48);
                *(int *)(obj + 0xa0) = 2;
            }
        }
    }
}
