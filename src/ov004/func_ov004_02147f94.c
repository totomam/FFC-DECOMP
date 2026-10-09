#include "ffc/types.h"

extern void func_02063530(void *p);
extern void func_0205d620(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov004_02147f94(uint8_t *p)
{
    func_02063530(p + 0xbc);
    func_0205d620(p + 0x84);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
