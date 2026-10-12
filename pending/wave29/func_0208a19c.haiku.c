#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_021419a4[];

uint32_t func_0208a19c(uint32_t a) {
    uint32_t b;
    uint32_t d;
    func_02088978();
    b = data_021419a4[1];
    if (a > b) {
        d = a - b;
        if (d < 0x80000000u) {
            a = 0;
        } else {
            a = 1;
        }
    } else {
        d = b - a;
        a = 1;
        if (d >= 0x80000000u) {
            a = 0;
        }
    }
    func_0208898c();
    return a;
}
