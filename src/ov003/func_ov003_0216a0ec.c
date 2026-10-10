#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201bcf4(uint32_t a, uint32_t b, uint32_t c);

void func_ov003_0216a0ec(uint8_t *p)
{
    func_0201bcf4(data_020b93b8, *(uint32_t *)(p + 0x14), p[0x18]);
}
