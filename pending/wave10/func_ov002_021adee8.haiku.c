#include "ffc/types.h"

extern void func_ov002_021d32f8(void *p);
extern void *func_020059cc(void *object);
extern void *func_02035fd0(void *object);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);

void *func_ov002_021adee8(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    func_ov002_021d32f8(p + 0x14c);
    func_020059cc(p + 0x140);
    func_02035fd0(p + 0xc8);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    return p;
}
