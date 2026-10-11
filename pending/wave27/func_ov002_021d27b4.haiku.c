#include "ffc/types.h"

extern uint32_t func_ov002_021c9298(uint32_t x);
extern uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_021c91b4(uint32_t x);
extern uint32_t func_ov002_0219acac(uint32_t a, uint32_t b);

void func_ov002_021d27b4(uint8_t *p)
{
    uint32_t v;
    v = func_ov002_021c9298(0);
    v = func_02055a2c(*(uint32_t *)(p + 0xc0), v);
    func_02056bc0(p + 0x14, (void *)v);
    v = func_ov002_021c91b4(0);
    v = func_ov002_0219acac(*(uint32_t *)(p + 0xc0), v);
    func_02056bc0(p + 0x14, (void *)v);
}
