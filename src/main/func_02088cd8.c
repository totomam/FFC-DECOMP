#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_02088c28(uint32_t x);
extern void func_0208898c(uint32_t x);
extern uint32_t data_0214188c;
extern uint16_t data_02141890[];

void func_02088cd8(uint32_t a, uint16_t b) {
    uint32_t saved = func_02088978();
    uint32_t x = (a & data_0214188c) & 0x1ff;
    for (;;) {
        int idx = 31 - (int)func_02088c28(x);
        if (idx < 0) {
            break;
        }
        uint32_t mask = ~(1u << idx);
        uint16_t v = data_02141890[idx];
        x &= mask;
        if (b == v) {
            data_02141890[idx] = 0;
            data_0214188c &= mask;
        }
    }
    func_0208898c(saved);
}
