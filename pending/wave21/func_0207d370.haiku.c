#include "ffc/types.h"

extern void func_0207ced8(void *obj, int a, int b);
extern uint8_t data_02140d00[];

void func_0207d370(void **self)
{
    func_0207ced8(self, 2, 1);
    *(uint32_t *)((uint8_t *)*self + 0xc) = 0;
    *(uint32_t *)((uint8_t *)*self + 0x10) = (uint32_t)data_02140d00;
    *(uint32_t *)((uint8_t *)*self + 0x14) = 1;
    func_0207ced8(self, 6, 1);
}
