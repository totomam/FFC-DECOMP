#include "ffc/types.h"

extern void func_ov002_021967c0(void *self, int a, int b);
extern uint8_t data_ov002_021d48a0[];
extern uint8_t data_ov002_021d48b8[];

void *func_ov002_0219804c(void *self, int a)
{
    func_ov002_021967c0(self, a, 2);
    *(void **)self = data_ov002_021d48a0;
    *(void **)((uint8_t *)self + 0x80) = data_ov002_021d48b8;
    return self;
}
