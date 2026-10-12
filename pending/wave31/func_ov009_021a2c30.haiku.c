#include "ffc/types.h"

extern uint32_t func_02056aec(void *p);
extern uint32_t func_02056b34(uint32_t v);
extern uint32_t func_0203bf90(uint32_t v);
extern uint32_t func_0203bf7c(uint32_t v);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov009_021a2c30(void *obj)
{
    uint32_t a = func_02056aec(obj);
    uint32_t v = func_02056b34(*(uint32_t *)((uint8_t *)obj + 0x218));
    uint32_t x = func_0203bf90(0x3c);
    uint32_t y = func_0203bf7c(0x3c);
    void *z = func_0203b6fc();
    func_02056bc0(z, (void *)y);
    func_02056bc0(z, (void *)x);
    obj = (uint8_t *)obj + 0x14;
    func_02056bc0(obj, z);
    func_02056bc0(obj, (void *)v);
    func_02056bc0(obj, (void *)a);
}
