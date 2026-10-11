#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t size);
extern void func_ov000_02147794(void *p);

void func_ov000_021566ac(void *p)
{
    uint8_t *base = (uint8_t *)p;
    uint32_t off = 0x1138;
    uint32_t src = 0x1a08;

    func_02084b2c(base + off, 0, 0xa0);
    *(uint32_t *)(base + (off + 0x48)) = 0xb68;
    *(uint32_t *)(base + (off + 0x4c)) = *(uint32_t *)(base + src);
    *(uint32_t *)(base + (off + 0x54)) = 0x5ea;
    *(uint32_t *)(base + (off + 0x58)) = *(uint32_t *)(base + (src + 4));
    func_ov000_02147794(base + off);
}
