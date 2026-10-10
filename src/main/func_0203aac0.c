#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void func_0203abd0(void *a, uint32_t b, void *c);

void func_0203aac0(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x8c);
    func_020375f4(0x51 << 6);
    func_0203c380();
    func_0203c394();
    func_0203abd0(p, v, p + 0x98);
}
