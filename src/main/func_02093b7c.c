#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);

void func_02093b7c(void *destination, const void *source, uint32_t length)
{
    func_02090380(destination, source, length * 2);
}
