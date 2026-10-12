#include "ffc/types.h"

extern void func_020873f8(void);
extern uint32_t func_02087aa0(uint32_t x);
extern void func_02087bfc(uint32_t a, uint32_t b);
extern uint32_t func_02087b64(uint32_t x);
extern void func_02087c08(uint32_t index, uint32_t value);
extern uint32_t func_02087460(void);
extern void func_02088014(uint32_t a, uint32_t b, uint32_t c);
extern void func_021da7a0(void);

void func_02087a3c(void)
{
    uint32_t k = 2;
    uint32_t v;

    func_020873f8();
    v = func_02087aa0(k);
    func_02087bfc(k, v);
    v = func_02087b64(k);
    func_02087c08(k, v);
    if (func_02087460() == 0) {
        func_02088014(1, k << 24, 0x2a);
        func_02088014(k, 0x27ff000, 0x16);
    } else {
        func_021da7a0();
    }
}
