#include "ffc/types.h"

extern uint8_t data_ov006_021bc828;
extern int func_0208bad0(int x);
extern void func_02088a18(void);
extern void func_020819ac(void);
extern void func_02081978(void);

void func_ov006_021b4f34(void)
{
    int v;
    if (data_ov006_021bc828 != 0) {
        v = (*(volatile uint16_t *)0x2ffffa8 & (2 << 14)) >> 15;
        if (v != 0) {
            return;
        }
        if (func_0208bad0(1) == 0) {
            return;
        }
        func_02088a18();
        func_020819ac();
        *(volatile uint32_t *)0x4001000 |= (1 << 16);
        func_02088a18();
        data_ov006_021bc828 = 0;
    } else {
        v = (*(volatile uint16_t *)0x2ffffa8 & (2 << 14)) >> 15;
        if (v == 0) {
            return;
        }
        func_02088a18();
        func_02081978();
        *(volatile uint32_t *)0x4001000 &= 0xfffeffff;
        func_02088a18();
        if (func_0208bad0(0) != 0) {
            data_ov006_021bc828 = 1;
        }
    }
}
