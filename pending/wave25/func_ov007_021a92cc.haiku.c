#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a92cc(uint8_t *self, uint32_t arg)
{
    if (arg != *(uint32_t *)(self + 0xcc)) {
        return;
    }
    uint32_t *p = *(uint32_t **)(self + 0xd0);
    *p = 0;
    uint32_t a = func_02056aec();
    uint32_t b = func_0203b708(0x1e);
    func_02056bc0(self + 0x14, (void *)b);
    func_02056bc0(self + 0x14, (void *)a);
}
