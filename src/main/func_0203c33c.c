#include "ffc/types.h"

extern uint8_t *data_0213df18;
extern void func_0204f208(uint32_t a, uint32_t b);

void func_0203c33c(void)
{
    func_0204f208(*(uint32_t *)(data_0213df18 + 0x20), 0x8000);
}
