#include "ffc/types.h"

extern void func_02036750(void *p);
extern void *func_02035fd0(void *object);
extern void func_02035f58(void);
extern void func_0209cf5c(void *p, int a, int b, void *c, void *d);

void *func_ov001_02189b7c(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    func_02036750(p + 0xa0);
    func_0209cf5c(p + 0xf8, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    return obj;
}
