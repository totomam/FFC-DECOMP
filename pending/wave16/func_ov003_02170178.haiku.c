#include "ffc/types.h"

extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern uint32_t data_020b93b8;

uint32_t func_ov003_02170178(uint32_t a)
{
    uint32_t r = func_0201c9ac(data_020b93b8, 3);
    if (r >= a) {
        return 1;
    }
    return 0;
}
