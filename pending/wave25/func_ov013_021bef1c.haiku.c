#include "ffc/types.h"

extern void func_ov013_021bedd8(void *p);
extern void func_ov013_021bee0c(void *p);
extern void func_0200958c(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);

void *func_ov013_021bef1c(uint8_t *p)
{
    func_ov013_021bedd8(p + 0x12c);
    func_ov013_021bee0c(p + 0x120);
    func_0200958c(p + 0x108);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    return p;
}
