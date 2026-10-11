#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0209cf5c(void *p, int a, int b, void *c, void *d);
extern uint8_t data_020ac658[];
extern void *func_02035fd0(void *object);
extern void func_02035f58(void);

void *func_0200f6bc(void *param_1)
{
    uint8_t *obj = (uint8_t *)param_1;
    *(uint32_t *)(obj + 8) = 0;
    *(uint32_t *)(obj + 0xc) = 0x100b4;
    *(uint32_t *)obj = (uint32_t)data_020ac658;
    func_02036750(obj + 0xac);
    func_0209cf5c(obj + 0x104, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    return obj;
}
