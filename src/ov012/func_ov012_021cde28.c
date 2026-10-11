#include "ffc/types.h"

extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_0201bcf4(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020b93b8;

void func_ov012_021cde28(uint8_t *a, uint32_t b)
{
    func_0201bcf4(data_020b93b8, 0x1d, (b != func_0201c9ac(data_020b93b8, 6)) ? 1 : 0);
    uint32_t *p = *(uint32_t **)(a + 0x88);
    if (p != 0) {
        *p = *(uint32_t *)(a + 0x80);
    }
}
