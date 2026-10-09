#include "ffc/types.h"

extern void func_020059cc(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);

uint8_t *func_ov007_021a6ee4(uint8_t *a0)
{
    func_020059cc(a0 + 0xe0);
    func_020558d8(a0 + 0x80);
    func_02056db0(a0);
    return a0;
}
