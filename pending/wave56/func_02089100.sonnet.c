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
    volatile uint16_t *hw;
    volatile uint16_t *r5 = (volatile uint16_t *)0x4000184;
    int32_t i;
    int32_t n;
    uint32_t nib;
    uint32_t v;
    int32_t t;
    uint32_t idx;

    if (data_021418c4 == 0) {
        data_021418c4 = 1;
        idx = 0xe2; i = 0;
        ((uint32_t *)0x2fffc00)[idx] = i;

        do {
            n = i++;
            data_021418c8[n] = n;
        } while (i < 32);
        *r5 = 0xc408;
        func_02086724(0x40000);
        func_0208658c(0x40000, func_02089280);
        func_020866dc(0x40000);

        hw = r5 - 2;
        for (;;) {
            v = hw[0];
            hw[0] = (v & 0xf) << 8;
            nib = v & 0xf;
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
