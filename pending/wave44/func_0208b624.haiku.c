#include "ffc/types.h"

extern uint32_t func_0208b5f8(void);
extern void func_020889f4(uint32_t x);
extern void func_02088978(void);
extern void func_02084800(void);
extern uint32_t func_02087460(void);
extern void func_021d9bf0(void);
extern void func_02088f94(void);

uint32_t func_0208b624(void)
{
    if (func_0208b5f8() != 0) {
        do {
            func_020889f4(0x51d23);
        } while (func_0208b5f8() != 0);
    }
    func_02088978();
    func_02084800();
    if (func_02087460() != 0) {
        func_021d9bf0();
    }
    for (;;) {
        func_02088f94();
    }
}
