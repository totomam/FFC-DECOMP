#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_ov003_021481c0(uint32_t x);
extern uint32_t func_ov003_021464f4(uint32_t a, uint32_t b);
extern void func_ov003_021581f4(uint32_t a, void *b, uint32_t c);
extern uint8_t data_ov003_0217b1c4[];

void func_ov003_0216965c(uint32_t *p)
{
    uint8_t *d;
    uint32_t r;

    func_020424e0(p[5]);
    p[6] = func_ov003_021481c0(p[6]);
    r = func_ov003_021464f4(func_020424e0(p[5]), p[6]);
    if (r == 0) {
        return;
    }
    d = data_ov003_0217b1c4;
    func_ov003_021581f4(r, d, r);
    p[7] = func_ov003_021481c0(p[7]);
    r = func_ov003_021464f4(func_020424e0(p[5]), p[7]);
    if (r != 0) {
        func_ov003_021581f4(r, d, r);
    }
}
