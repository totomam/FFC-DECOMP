#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_ov009_021ad6ac(void *a, uint32_t b, void *c);
extern uint32_t func_02035ff4(void *object);
extern void *func_02035fd0(void *object);

uint32_t func_ov009_021ad700(void *a, uint32_t b)
{
    uint8_t buf[0x60];
    func_02035f58(buf);
    func_ov009_021ad6ac(a, b, buf);
    uint32_t r = func_02035ff4(buf);
    func_02035fd0(buf);
    return r;
}
