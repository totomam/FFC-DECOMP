#include "ffc/types.h"

extern uint32_t data_020afa34;
extern uint32_t data_020b93b8;
extern uint32_t func_0201f124(uint32_t);
extern void func_0201bcf4(uint32_t, uint32_t, uint32_t);
extern void func_02046f9c(void *);
extern void func_02056844(void *);

void *func_02047454(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t st;
    uint32_t r;
    uint32_t flag;

    *(uint32_t *)p = (uint32_t)&data_020afa34;
    st = 0x18;
    if (p[0x94] == 0) {
        st = 0x19;
    }
    r = func_0201f124(data_020b93b8);
    flag = 1;
    if (*(uint32_t *)(p + 0x90) == r) {
        flag = 0;
    }
    func_0201bcf4(data_020b93b8, st, flag);
    func_02046f9c(p);
    func_02056844(p);
    return p;
}
