#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201bc64(uint32_t a, uint32_t b, uint32_t c, uint8_t d);

void func_ov003_02165eb0(uint8_t *p)
{
    func_0201bc64(data_020b93b8, *(uint32_t *)(p + 0x18), *(uint32_t *)(p + 0x1c), p[0x20]);
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
