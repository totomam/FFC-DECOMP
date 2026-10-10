#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1a8(void *a, uint32_t b, void *c);

void func_ov010_021ca914(void *p)
{
    func_0201f1a8(data_020b93b8, func_0201b924(data_020b93b8), (uint8_t *)p + 0x220);
}
