#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *obj, uint32_t a, uint32_t b);

uint32_t func_0203a348(uint8_t *p)
{
    uint32_t v = func_0201b924(data_020b93b8);
    func_0201f1f0(data_020b93b8, v, *(uint32_t *)(p + 0xf0));
    return 1;
}
