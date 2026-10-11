#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);

void func_ov013_021c0158(uint8_t *p)
{
    uint32_t *q = *(uint32_t **)(p + 0xd8);
    *q = 0xffffffff;
    uint32_t r5 = func_02056aec();
    void *n = func_0203b708(0x1e);
    func_02056bc0(p + 0x14, n);
    func_02056bc0(p + 0x14, (void *)r5);
}
