#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint64_t data_0209def4;
extern uint64_t func_0201b7b0(uint32_t);
extern uint64_t func_0201b80c(uint32_t);
extern void func_0201efbc(uint32_t, uint32_t);
extern void func_0201b81c(uint32_t);

void func_ov008_0219b0dc(uint8_t *p)
{
    uint64_t a = func_0201b7b0(data_020b93b8);
    a = a - func_0201b80c(data_020b93b8);
    if (data_0209def4 < a) {
        func_0201efbc(data_020b93b8, *(uint32_t *)(p + 0x118));
        func_0201b81c(data_020b93b8);
    }
}
