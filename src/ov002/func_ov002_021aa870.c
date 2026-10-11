#include "ffc/types.h"

extern uint32_t func_ov002_021d3314(const void *object);
extern uint32_t func_ov002_021a1838(uint32_t x);
extern void func_ov002_021d3334(void *object, int32_t v);

void func_ov002_021aa870(void *p, int32_t b)
{
    uint8_t *base = (uint8_t *)p;
    int32_t flag = 0;
    int32_t a = (int32_t)func_ov002_021d3314(base + 0x13c);
    if (func_ov002_021a1838(*(uint32_t *)(base + 0xbc)) != 0) {
        flag = 1;
    }
    if ((a > b ? b : a) >= flag) {
        if (a <= b) {
            b = a;
        }
        flag = b;
    }
    func_ov002_021d3334(base + 0x13c, flag);
}
