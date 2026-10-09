#include "ffc/types.h"

extern void func_02063530(void *p);
extern void func_0205d620(void *p);
extern void func_02056db0(void *p);

uint8_t *func_ov004_02147f78(uint8_t *a0)
{
    func_02063530(a0 + 0xbc);
    func_0205d620(a0 + 0x84);
    func_02056db0(a0);
    return a0;
}
