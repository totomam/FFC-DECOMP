#include "ffc/types.h"

extern void *func_02056830(void *p);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);

uint32_t func_ov003_02168ee0(void *object, uint32_t first, uint32_t second)
{
    uint32_t ret = (uint32_t)func_02056830(object);
    func_02091b10((void *)ret, first, second);
    return ret;
}
