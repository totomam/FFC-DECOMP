#include "ffc/types.h"

extern void func_02037680(uint32_t p);
extern void func_0203550c(uint32_t a, uint32_t b);
extern uint32_t data_021395b0;

void func_0203760c(uint32_t p)
{
    uint32_t d;
    uint32_t i;

    func_02037680(p);
    d = data_021395b0;
    for (i = 0; i < 16; i++) {
        uint32_t m = 1u << i;
        uint32_t pm = p & m;
        uint32_t dm = d & m;
        if (pm != 0 && dm == 0) {
            func_0203550c(0, i);
            d = data_021395b0;
            d |= m;
            data_021395b0 = d;
        }
    }
}
