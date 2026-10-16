#include "ffc/types.h"
extern uint8_t data_020b93bc[];
extern void func_0208763c(void *);
extern void func_02087678(void *);
void func_0201b81c(uint8_t *p) {
    func_0208763c(data_020b93bc);
    *(unsigned long long*)(p + 0xa4) = *(unsigned long long*)(p + 0x98);
    func_02087678(data_020b93bc);
}
