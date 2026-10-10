#include "ffc/types.h"

extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void *fn);
extern void func_020367a8(void *p);
extern void *func_02035fd0(void *object);

void *func_ov001_0218c30c(void *object)
{
    func_0209d02c((uint8_t *)object + 0xf8, 5, 0x60, (void *)func_02035fd0);
    func_020367a8((uint8_t *)object + 0xa0);
    return object;
}
