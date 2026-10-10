#include "ffc/types.h"

extern uint8_t data_0209e730[];
extern void func_0204f6b0(void *a, void *b, void *c);

void func_0204f830(void *a, int32_t idx)
{
    func_0204f6b0(a, &data_0209e730[idx * 0x1c], (uint8_t *)a + 0x60);
}
