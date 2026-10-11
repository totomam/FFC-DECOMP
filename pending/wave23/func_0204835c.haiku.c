#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_0209d02c(void *p, int count, int size, void *fn);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_0204835c(void *object)
{
    uint8_t *obj = (uint8_t *)object;
    func_0200d5ec(obj + 0x274);
    func_0209d02c(obj + 0x94, 5, 0x60, (void *)func_02035fd0);
    func_02056db0(object);
    func_02056844(object);
    return object;
}
