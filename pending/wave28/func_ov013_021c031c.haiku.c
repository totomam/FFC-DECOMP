#include "ffc/types.h"

extern void func_0201c220(void *a, uint32_t b, uint32_t c);
extern uint32_t func_02056aec(void *o);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b93b8;

void func_ov013_021c031c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    if (*(uint32_t *)(p + 0x100) != 1) {
        return;
    }
    func_0201c220(data_020b93b8, 0x10, *(uint32_t *)(p + 0x108));
    **(uint32_t **)(p + 0xd8) = *(uint32_t *)(p + 0xfc);
    {
        uint32_t n = func_02056aec(self);
        func_02056bc0(p + 0x14, (void *)n);
    }
}
