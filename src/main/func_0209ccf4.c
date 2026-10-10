#include "ffc/types.h"

extern uint32_t data_020b3828[];

void func_0209ccf4(void)
{
    void (*fn)(void) = (void (*)(void))data_020b3828[1];
    fn();
}
