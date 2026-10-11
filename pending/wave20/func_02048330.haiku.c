#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_0209d02c(void *p, int a, int b, void *(*f)(void *));
extern void func_02056db0(void *p);
extern void *func_02035fd0(void *object);

void *func_02048330(void *object)
{
    func_0200d5ec((uint8_t *)object + 0x274);
    func_0209d02c((uint8_t *)object + 0x94, 5, 0x60, func_02035fd0);
    func_02056db0(object);
    return object;
}
