#include "ffc/types.h"

extern void func_020367a8(void *p);
extern void func_ov009_0219a484(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);

void *func_ov009_021a4228(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t base = 0x220;

    func_020367a8(b + base);
    func_ov009_0219a484(b + (base - 0xc));
    func_0200d5ec(b + (base - 0x18));
    func_0200d5ec(b + (base - 0x24));
    func_0200d5ec(b + (base - 0x30));
    func_0200d5ec(b + (base - 0x3c));
    func_0200d5ec(b + (base - 0x48));
    func_0200d5ec(b + (base - 0x54));
    func_0200d5ec(b + (base - 0x60));
    func_0200d5ec(b + (base - 0x6c));
    func_0200d5ec(b + (base - 0x78));
    func_0200d5ec(b + (base - 0x84));
    func_0200d5ec(b + (base - 0x90));
    func_0200d5ec(b + (base - 0x9c));
    func_020695d0(p);
    return p;
}
