#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_020b93bc;

void func_0201b81c(uint8_t *p)
{
    uint64_t v;
    func_0208763c(&data_020b93bc);
    v = *(uint64_t *)(p + 0x98);
    *(uint64_t *)(p + 0xa4) = v;
    func_02087678(&data_020b93bc);
}
