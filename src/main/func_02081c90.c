#include "ffc/types.h"

extern void func_02081d94(void);
extern void func_02081db4(void);
extern void func_02081f04(void);

void func_02081c90(void) {
    volatile uint32_t *p;
    volatile uint16_t *r4;
    uint32_t v;
    uint32_t s;
    uint32_t m;

    func_02081d94();
    *(volatile uint32_t *)0x4000504 = 0;
    p = (volatile uint32_t *)0x4000600;
    while (*p & 0x08000000) {
    }
    r4 = (volatile uint16_t *)0x4000060;
    *r4 = 0;
    *p = 0;
    *(volatile uint32_t *)0x4000010 = 0;
    *r4 = *r4 | 0x2000;
    *r4 = *r4 | 0x1000;
    m = 0xffffcffd;
    *r4 = *r4 & m;
    m = m + 2;
    s = 0x10;
    *r4 = (*r4 & m) | s;
    v = *r4;
    *r4 = v & 0xcffb;
    *p = *p | (s << 11);
    v = *p;
    *p = (v & 0x3fffffff) | 0x80000000;
    func_02081db4();
    *(volatile uint32_t *)0x4000350 = 0;
    *(volatile uint16_t *)0x4000354 = 0x7fff;
    *(volatile uint16_t *)0x4000356 = 0;
    *(volatile uint32_t *)0x4000358 = 0;
    *(volatile uint16_t *)0x400035c = 0;
    r4 = (volatile uint16_t *)0x4000008;
    *r4 = *r4 & ~3;
    func_02081f04();
    *(volatile uint32_t *)0x40004a4 = 0x001f0080;
    *(volatile uint32_t *)0x40004a8 = 0;
    *(volatile uint32_t *)0x40004ac = 0;
}
