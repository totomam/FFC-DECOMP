#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_020b93e0[];
extern uint8_t data_020ad5c4[];

void func_02021490(uint32_t val)
{
    volatile uint32_t buf[2];
    buf[0] = val;
    func_0208763c(data_020b93e0);
    *(uint32_t *)(data_020ad5c4 + 0x10) = val;
    func_02087678(data_020b93e0);
}
