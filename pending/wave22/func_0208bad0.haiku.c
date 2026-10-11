#include "ffc/types.h"

extern uint16_t func_0208196c(void);
extern void func_02081978(void);
extern void func_0208b98c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0208bad0(uint32_t a)
{
    uint32_t r4 = a;
    if (a != 1) {
        r4 = 0;
        if (func_0208196c() != 0) {
            func_02081978();
        }
    }
    func_0208b98c(r4, 0, 0, 1);
}
