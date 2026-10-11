#include "ffc/types.h"

extern uint32_t func_ov002_021a3fb8(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_02056aec(void *obj);

void func_ov002_021a4c0c(uint8_t *p)
{
    uint32_t r;
    r = func_ov002_021a3fb8(*(uint32_t *)(p + 0x80), *(uint32_t *)(p + 0x84));
    func_02056bc0(p + 0x14, r);
    r = func_02056aec(p);
    func_02056bc0(p + 0x14, r);
}
