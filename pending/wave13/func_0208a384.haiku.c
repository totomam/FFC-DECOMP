#include "ffc/types.h"

extern uint8_t *data_021434e0;
extern void func_02087874(void *p, uint32_t n);

uint32_t func_0208a384(void)
{
    func_02087874(data_021434e0 + 4, 4);
    return *(uint32_t *)(data_021434e0 + 4);
}
