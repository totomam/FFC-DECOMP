#include "ffc/types.h"

extern void func_02089ce0(uint32_t a, uint32_t b);
extern uint32_t data_0213e240[];

uint32_t func_02079790(uint32_t a)
{
    if (a == 0) {
        return 1;
    }
    if (data_0213e240[2] & a) {
        return 0;
    }
    func_02089ce0(a, 0);
    data_0213e240[2] |= a;
    return 1;
}
