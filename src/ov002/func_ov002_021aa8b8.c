#include "ffc/types.h"

extern uint32_t func_ov002_021d3310(const void *object);
extern void func_ov002_021aa870(void *obj, int32_t v);
extern uint32_t func_ov002_021aa8f0(void *obj);
extern void func_02055914(uint32_t a, uint32_t b);

void func_ov002_021aa8b8(void *obj, int32_t b, int32_t c)
{
    uint32_t r = func_ov002_021d3310((uint8_t *)obj + 0x13c);
    func_ov002_021aa870(obj, b + (int32_t)r);
    if (b > 0 && c != 0) {
        uint32_t x = func_ov002_021aa8f0(obj);
        func_02055914(*(uint32_t *)((uint8_t *)obj + 0xb8), x);
    }
}
