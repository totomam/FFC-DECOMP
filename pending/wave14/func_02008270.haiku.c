#include "ffc/types.h"

extern uint32_t func_02006bfc(void);
extern uint32_t func_02006c94(void);

uint32_t func_02008270(void)
{
    if (func_02006bfc() != 0) {
        return 0;
    }
    return func_02006c94();
}
