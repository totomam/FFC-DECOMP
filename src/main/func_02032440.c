#include "ffc/types.h"

extern void func_0200b630(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);

uint8_t *func_02032440(uint8_t *a0)
{
    func_0200b630(a0 + 0xe8);
    func_0200d5ec(a0 + 0xc4);
    func_020695d0(a0);
    return a0;
}
