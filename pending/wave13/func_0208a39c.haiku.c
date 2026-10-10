#include "ffc/types.h"

extern void func_02087874(void *p, uint32_t n);
extern uint32_t *data_021434e0;

uint32_t func_0208a39c(void)
{
    func_02087874(data_021434e0, 4);
    return *data_021434e0;
}
