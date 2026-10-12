#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_0208eb30(void);
extern void func_02087f44(uint32_t a, uint32_t b);
extern void func_02087840(void);
extern void func_020878d0(void);
extern void func_02087f14(uint32_t a);
extern void func_02087f34(uint32_t a);
extern void func_02087f68(uint32_t a);
extern void func_02087f04(uint32_t a);
extern void func_02087f24(uint32_t a);
extern void func_02087f58(uint32_t a);
extern void func_0208898c(uint32_t a);
extern uint32_t data_021440c0;

void func_0208ecf8(uint32_t p)
{
    uint32_t r4;
    uint32_t r1;

    r4 = func_02088978();
    data_021440c0 = p;
    if (func_0208eb30() != 0) {
        if (p) { r1 = 1; } else { r1 = 5; }
        func_02087f44(0xf000, r1 << 12);
        if (p) {
            func_02087840();
            func_020878d0();
            func_02087f14(8);
            func_02087f34(8);
            func_02087f68(8);
        } else {
            func_02087f04(8);
            func_02087f24(8);
            func_02087f58(8);
        }
    }
    func_0208898c(r4);
}
