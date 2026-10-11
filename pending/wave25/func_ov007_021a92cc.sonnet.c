#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a92cc(uint8_t *self, uint32_t arg)
{
    if (arg == *(uint32_t *)(self + 0xcc)) {
        **(uint32_t **)(self + 0xd0) = 0;
        void *a = (void *)func_02056aec();
        void *b = (void *)func_0203b708(0x1e);
        self += 0x14;
        func_02056bc0(self, b);
        func_02056bc0(self, a);
    }
}
