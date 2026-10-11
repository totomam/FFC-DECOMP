#include "ffc/types.h"

extern void func_ov002_021aa08c(void *p);
extern void func_0200d5ec(void *p);
extern void func_ov002_021d32f8(void *p);
extern void *func_02035fd0(void *object);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);

void *func_ov002_021ad25c(void *p)
{
    uint8_t *s = (uint8_t *)p;
    func_ov002_021aa08c(s + 0x190);
    func_0200d5ec(s + 0x184);
    func_ov002_021d32f8(s + 0x13c);
    func_02035fd0(s + 0xd8);
    func_020558d8(s + 0x80);
    func_02056db0(s);
    return s;
}
