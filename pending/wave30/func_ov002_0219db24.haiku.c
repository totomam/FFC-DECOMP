#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_ov002_0219f8b8(void *p);
extern void func_ov002_0219f8fc(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint32_t data_ov002_021d4ec4[];
extern uint32_t data_ov002_021d4ee0[];

void *func_ov002_0219db24(uint8_t *r0)
{
    uint8_t *p = r0;
    *(uint32_t **)p = data_ov002_021d4ec4;
    *(uint32_t **)(p + 0x80) = data_ov002_021d4ee0;
    func_02056c4c(p + 0x48);
    func_02056c4c(p + 0x14);
    func_ov002_0219f8b8(p + 0x120);
    func_ov002_0219f8fc(p + 0x114);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
