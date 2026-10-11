#include "ffc/types.h"

extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void *c);
extern void func_02055a5c(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02037b90(void);

void *func_ov002_021987b0(uint8_t *p)
{
    func_0209d02c(p + 0x13c, 2, 0x160, (void *)func_02037b90);
    func_02055a5c(p + 0xe4);
    func_02055a5c(p + 0xb8);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    return p;
}
