#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern int func_02089820(void);
extern uint32_t data_02141948[];

uint32_t func_020893e0(uint32_t a, uint32_t b, uint32_t c)
{
    func_02088978();
    if (data_02141948[1] != 0) {
        func_0208898c();
        return 1;
    }
    data_02141948[1] = 1;
    func_0208898c();
    data_02141948[6] = 1;
    data_02141948[7] = 0;
    data_02141948[3] = a;
    data_02141948[2] = b;
    data_02141948[5] = c;
    if (func_02089820() != 0) {
        return 0;
    }
    data_02141948[1] = 0;
    return 3;
}
