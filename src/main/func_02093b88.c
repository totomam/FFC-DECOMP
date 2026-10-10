#include "ffc/types.h"

extern void func_02090398(void *destination, const void *source, uint32_t length);

void func_02093b88(void *destination, const void *source, uint32_t length)
{
    func_02090398(destination, source, length * 2);
}
