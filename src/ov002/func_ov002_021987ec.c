#include "ffc/types.h"

extern void func_0209d02c(void *p, int a, int b, void *c);
extern void func_02055a5c(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern void func_02037b90(void);

void *func_ov002_021987ec(uint8_t *self)
{
    func_0209d02c(self + 0x13c, 2, 0x160, (void *)func_02037b90);
    func_02055a5c(self + 0xe4);
    func_02055a5c(self + 0xb8);
    func_020558d8(self + 0x80);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
