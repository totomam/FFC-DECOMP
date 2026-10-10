#include "ffc/types.h"

extern char data_ov003_0217b1b4[];
extern void func_ov003_02164834(void *self, uint32_t a1, uint32_t a2, uint16_t a5, uint32_t a6, uint16_t a7, uint16_t a8, uint32_t a9);

void *func_ov003_021648cc(void *self, uint32_t a1, uint32_t a2, uint16_t a3, uint16_t a5, uint32_t a6, uint16_t a7, uint16_t a8, uint32_t a9)
{
    func_ov003_02164834(self, a1, a2, a5, a6, a7, a8, a9);
    *(void **)self = data_ov003_0217b1b4;
    *(uint16_t *)((uint8_t *)self + 0x94) = a3;
    return self;
}
