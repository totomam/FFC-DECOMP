#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void *fn);
extern void func_020367a8(void *p);

void *func_0201414c(void *object)
{
    uint8_t *p = (uint8_t *)object;
    func_0209d02c(p + 0x104, 5, 0x60, (void *)func_02035fd0);
    func_020367a8(p + 0xac);
    return object;
}
