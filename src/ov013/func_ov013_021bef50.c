#include "ffc/types.h"

extern void func_ov013_021bedd8(void *p);
extern void func_ov013_021bee0c(void *p);
extern void func_0200958c(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov013_021bef50(uint8_t *a)
{
    func_ov013_021bedd8(a + 0x12c);
    func_ov013_021bee0c(a + 0x120);
    func_0200958c(a + 0x108);
    func_020558d8(a + 0x80);
    func_02056db0(a);
    func_02056844(a);
    return a;
}
