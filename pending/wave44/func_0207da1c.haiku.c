#include "ffc/types.h"

extern uint16_t func_02088a2c(void *object);
extern uintptr_t func_0207caac(void);
extern uint32_t func_02086a4c(void);
extern void func_0207cabc(uint32_t x);
extern void func_0207d67c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_0207cb04(uint32_t x);
extern void func_02086aa4(int32_t bit_index);
extern uint32_t func_02087460(void);
extern void func_021d8fa8(void);
extern uint32_t data_02140e00[];
extern uint32_t data_02140e2c[];

void func_0207da1c(void)
{
    uint16_t r4;

    data_02140e00[1] = (uint32_t)func_0207d67c;
    if (func_02088a2c(data_02140e00) == 1) {
        if (*(uint32_t *)(func_0207caac() + 0x80) != 0) {
            r4 = (uint16_t)func_02086a4c();
            func_0207cabc(r4);
            func_0207d67c(0, data_02140e2c, *(uint32_t *)(func_0207caac() + 0x80), 0x88);
            func_0207cb04(r4);
            func_02086aa4(r4);
        }
    }
    if (func_02087460() != 0) {
        func_021d8fa8();
    }
}
