#include "ffc/types.h"

extern void func_ov002_021aa08c(void *p);
extern void func_0200d5ec(void *p);
extern void func_ov002_021d32f8(void *p);
extern void *func_02035fd0(void *object);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov002_021a305c(void *param)
{
    uint8_t *p = (uint8_t *)param;

    func_ov002_021aa08c(p + 0x190);
    func_0200d5ec(p + 0x184);
    func_ov002_021d32f8(p + 0x13c);
    func_02035fd0(p + 0xd8);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
