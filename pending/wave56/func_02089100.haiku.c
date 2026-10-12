#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02086724(uint32_t);
extern void func_0208658c(uint32_t, void (*)(void));
extern void func_020866dc(uint32_t);
extern void func_0208898c(uint32_t);
extern void func_02089280(void);
extern uint16_t data_021418c4;
extern uint32_t data_021418c8[];

void func_02089100(void)
{
    uint32_t saved = func_02088978();
    volatile uint16_t *hw = (volatile uint16_t *)0x4000180;
    int32_t i;
    int32_t n;
    uint32_t nib;
    int32_t t;
    uint32_t idx;

    if (data_021418c4 == 0) {
        data_021418c4 = 1;
        idx = 0xe2;
        ((uint32_t *)0x2fffc00)[idx] = 0;
        for (i = 0; i < 32; i++) {
            n = i;
            data_021418c8[i] = n;
        }
        *(volatile uint16_t *)0x4000184 = 0xc408;
        func_02086724(0x40000);
        func_0208658c(0x40000, func_02089280);
        func_020866dc(0x40000);

        for (;;) {
            nib = hw[0] & 0xf;
            hw[0] = nib << 8;
            if (nib == 0 && n > 4) {
                break;
            }
            t = 1000;
            if ((hw[0] & 0xf) == nib) {
                for (;;) {
                    if (t <= 0) {
                        n = 0;
                        break;
                    }
                    t--;
                    if ((hw[0] & 0xf) != nib) {
                        break;
                    }
                }
            }
            n++;
        }
    }
    func_0208898c(saved);
}
