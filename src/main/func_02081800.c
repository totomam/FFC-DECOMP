#include "ffc/types.h"

extern void func_020836ec(void);
extern uint32_t func_02086a4c(void);
extern void func_02088f30(void);
extern void func_021d9aa4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02084498(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_020849e0(uint32_t a, uint32_t b, uint32_t c);
extern uint8_t data_0214136c[];
extern uint8_t data_020b2944[];

void func_02081800(void)
{
    volatile uint16_t *powcnt = (volatile uint16_t *)0x04000304;
    volatile uint16_t *dispstat;
    volatile uint16_t *bg;
    uint16_t *flag;
    uint32_t *dp;
    int32_t r4 = (int32_t)0xfffffdf1;
    uint32_t r5;

    *powcnt = *powcnt | 0x8000;
    *powcnt = 0x20e | (*powcnt & r4);
    *powcnt = *powcnt | 1;

    func_020836ec();

    flag = (uint16_t *)data_0214136c;
    if (flag[1] == 0) {
        do {
            r5 = func_02086a4c();
            if ((int32_t)r5 == (r4 >> 8)) {
                func_02088f30();
            }
            flag[1] = (uint16_t)r5;
        } while (flag[1] == 0);
    }

    r5 = 0;
    dispstat = (volatile uint16_t *)0x04000004;
    dp = (uint32_t *)data_020b2944;
    *dispstat = (uint16_t)r5;
    *(volatile uint32_t *)0x04000000 = r5;

    if (dp[1] != r5 - 1) {
        if (dp[1] > 3) {
            func_021d9aa4(dp[1] - 4, 0x04000008, r5, 0x60);
            *(volatile uint16_t *)0x0400006c = (uint16_t)r5;
            func_021d9aa4(dp[1] - 4, 0x04001000, r5, 0x70);
        } else {
            func_02084498(dp[1], 0x04000008, r5, 0x60, 1);
            *(volatile uint16_t *)0x0400006c = (uint16_t)r5;
            func_02084498(dp[1], 0x04001000, r5, 0x70, 1);
        }
    } else {
        func_020849e0(r5, 0x04000008, 0x60);
        *(volatile uint16_t *)0x0400006c = (uint16_t)r5;
        func_020849e0(r5, 0x04001000, 0x70);
    }

    bg = (volatile uint16_t *)0x04000020;
    bg[0] = 0x100;
    bg[3] = 0x100;
    bg[8] = 0x100;
    bg[0xb] = 0x100;
    bg = (volatile uint16_t *)0x04001020;
    bg[0] = 0x100;
    bg[3] = 0x100;
    bg[8] = 0x100;
    bg[0xb] = 0x100;
}
