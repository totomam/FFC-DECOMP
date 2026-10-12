#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_ov007_021bef6c(void *p);
extern void func_0200958c(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);

void *func_ov007_021bef88(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    func_020059cc(p + 0x124);
    func_ov007_021bef6c(p + 0x100);
    func_0200958c(p + 0xe8);
    func_0200d5ec(p + 0xc8);
    func_020695d0(p);
    return p;
}
