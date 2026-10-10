#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern int32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_0201c220(uint32_t a, uint32_t b, int32_t c);

void func_ov003_02170514(int32_t x)
{
    int32_t r = func_0201c9ac(data_020b93b8, 3) - x;
    func_0201c220(data_020b93b8, 3, r);
}
