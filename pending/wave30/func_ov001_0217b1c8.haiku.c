#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *r0, void *r1);
extern uint32_t func_ov000_021658c0(void *p);
extern void func_ov000_021687e0(uint32_t x, uint32_t *arr, void *cb);
extern uint8_t data_ov001_02190e6c[];
extern uint8_t data_ov001_02190e80[];
extern void func_ov001_0217b1bc(void);

int func_ov001_0217b1c8(void *r0, uint32_t x, void *p, void *q)
{
    uint32_t arr[2];

    if (p == 0) {
        func_ov001_0217ef6c(r0, data_ov001_02190e6c);
        return 2;
    }
    if (q == 0) {
        func_ov001_0217ef6c(r0, data_ov001_02190e80);
        return 2;
    }
    arr[0] = func_ov000_021658c0(p);
    arr[1] = func_ov000_021658c0(q);
    func_ov000_021687e0(x, arr, func_ov001_0217b1bc);
    return 0;
}
