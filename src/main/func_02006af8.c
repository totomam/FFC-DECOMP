#include "ffc/types.h"

extern uint8_t data_020b3af8[];
extern void func_02006928(void *p, int n, int c, int a, int b);

void func_02006af8(int a, int b, int c)
{
    func_02006928(data_020b3af8, 2, c, a, b);
}
