#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t func_0201e97c(void *object);
extern uint32_t func_0201e920(const void *object);
extern uint32_t func_0209a4cc(uint32_t x);
extern void func_0209b5bc(uint32_t a, uint32_t b);

void func_ov003_0214f7ec(void)
{
    uint32_t a = func_0201e97c(data_020b93b8);
    uint32_t b = func_0201e920(data_020b93b8);
    uint32_t c = func_0209a4cc(a);
    uint32_t d = func_0209a4cc(b);
    func_0209b5bc(c, d);
}
