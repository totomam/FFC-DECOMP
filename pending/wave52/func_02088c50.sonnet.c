#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_02088c28(uint32_t x);
extern void func_0208898c(uint32_t x);
extern uint32_t data_0214188c;
extern uint16_t data_02141890[];

uint32_t func_02088c50(uint32_t a, uint16_t b)
{
    uint32_t t = func_02088978();
    uint32_t r4 = a & data_0214188c;
    int idx;
    uint32_t bit;
    uint32_t old;

    for (;;) {
        idx = 31 - (int)func_02088c28(r4);
        if (idx < 0) {
            break;
        }
        bit = 1u << idx;
        r4 &= ~bit;
        if (data_02141890[idx] != b) {
            func_0208898c(t);
            return 0;
        }
    }

    r4 = a & 0x1ff;
    for (;;) {
        idx = 31 - (int)func_02088c28(r4);
        if (idx < 0) {
            break;
        }
        bit = 1u << idx;
        data_02141890[idx] = b;
        old = data_0214188c;
        r4 &= ~bit;
        data_0214188c = old | bit;
    }
    func_0208898c(t);
    return 1;
}
