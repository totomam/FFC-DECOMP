#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_0209d02c(void *p, int a, int b, void *fn);
extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);

void *func_ov011_021c9d18(void *obj)
{
    uint8_t *p = (uint8_t *)obj + 0x84;
    func_0209d02c((uint8_t *)p + 0xc, 5, 0x60, (void *)func_02035fd0);
    func_020059cc(p);
    func_02056db0(obj);
    return obj;
}
