#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02081210(int32_t a, int32_t b);
extern void func_020887fc(void *obj);
extern void func_02088770(void *base, int32_t a, int32_t b, void (*fn)(void), void *ctx);
extern void func_ov004_02148f20(void);
extern void func_ov004_02148f14(void);
extern void func_ov004_02148f2c(void);

void func_ov004_02149160(uint8_t *p)
{
    int32_t x = (0x2e000 + func_02081210(func_020817c8(0x64000, *(int32_t *)(p + 0x90)), 0x64000)) >> 12;
    int32_t y = (0x92000 - func_02081210(func_020817c8(0x64000, *(int32_t *)(p + 0x8c)), 0x64000)) >> 12;
    int32_t i;

    for (i = 0; i < 3; i++) {
        func_020887fc(p + 0x158 + i * 0x28);
    }

    if (*(int32_t *)(p + 0x90) > 0) {
        func_02088770(p + 0x180, 0, 0x17, func_ov004_02148f20, p);
        if (x < y) {
            func_02088770(p + 0x158, (int16_t)x, 4, func_ov004_02148f14, p);
        }
    } else {
        func_02088770(p + 0x158, 0, 0x17, func_ov004_02148f14, p);
    }

    if (*(int32_t *)(p + 0x8c) > 0) {
        func_02088770(p + 0x1a8, (int16_t)y, 4, func_ov004_02148f2c, p);
    }
}
