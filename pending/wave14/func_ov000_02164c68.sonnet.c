#include "ffc/types.h"

extern void func_02084ca4(uint32_t a, void *b, uint32_t c);
extern uint8_t data_ov000_02170984[];

void *func_ov000_02164c68(void)
{
    func_02084ca4(0x2fffe0c, data_ov000_02170984, 4);
    data_ov000_02170984[4] = 0;
    return data_ov000_02170984;
}
