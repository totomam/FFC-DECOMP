#include "ffc/types.h"

extern void func_02006928(void *p, int32_t n, void *a, int32_t b, int32_t c);
extern uint8_t data_020b3af8[];

void func_02006b48(void *a)
{
    func_02006928(data_020b3af8, 4, a, -1, -1);
}
