#include "ffc/types.h"

extern uint32_t data_02143540;
extern void func_0208b66c(void);

void func_0208b65c(void *p0)
{
    *(void **)((uint8_t *)&data_02143540 + 0x18) = p0;
    func_0208b66c();
}
