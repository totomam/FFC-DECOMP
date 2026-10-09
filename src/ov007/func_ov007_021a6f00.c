#include "ffc/types.h"

extern void func_020059cc(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov007_021a6f00(uint8_t *p)
{
    func_020059cc(p + 0xe0);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
