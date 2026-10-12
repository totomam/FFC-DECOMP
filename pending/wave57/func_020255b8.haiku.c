#include "ffc/types.h"

extern void func_02081c68(uint32_t);

void func_020255b8(uint8_t *a)
{
    volatile uint32_t *p;
    uint32_t r4;
    uint32_t off;
    uint32_t off2;

    r4 = *(uint32_t *)(a + 0x18) & 0x3f;
    if (*(uint32_t *)(a + 0x1c) == 0) {
        return;
    }
    *(volatile uint32_t *)0x04000440 = 2;
    *(volatile uint32_t *)0x04000444 = 0;
    if (*(uint32_t *)(a + 0xd0) != 0) {
        func_02081c68(*(uint32_t *)(a + 0xd0));
    }
    off = 0x2EC;
    off2 = 0x188;
    p = (volatile uint32_t *)0x04000470;
    *p = *(uint32_t *)(a + off - 8);
    *p = *(uint32_t *)(a + off - 4);
    *p = *(uint32_t *)(a + off);
    p[0x34 / 4] = 0x30C0 | (r4 << 24) | ((*(uint32_t *)(a + 0x1c) & 0xffff) << 16);
    p[0x38 / 4] = 0x1600;
    p[0x10 / 4] = *(uint16_t *)(a + off2);
    p[0x90 / 4] = 2;
    p[0x1c / 4] = ((*(uint32_t *)(a + off + 8) & 0xffff) << 16) | (*(uint32_t *)(a + off + 4) & 0xffff);
    p[0x1c / 4] = *(uint32_t *)(a + off + 0xc) & 0xffff;
    p[0x1c / 4] = ((*(uint32_t *)(a + off + 0x14) & 0xffff) << 16) | (*(uint32_t *)(a + off + 0x10) & 0xffff);
    p[0x1c / 4] = *(uint32_t *)(a + off + 0x18) & 0xffff;
    p[0x1c / 4] = ((*(uint32_t *)(a + off + 0x24) & 0xffff) << 16) | (*(uint32_t *)(a + off + 0x20) & 0xffff);
    p[0x1c / 4] = *(uint32_t *)(a + off2 * 2) & 0xffff;
    p[0x1c / 4] = ((*(uint32_t *)(a + off + 0x30) & 0xffff) << 16) | (*(uint32_t *)(a + off + 0x28) & 0xffff);
    p[0x1c / 4] = *(uint32_t *)(a + off + 0x2c) & 0xffff;
    p[0x94 / 4] = 0;
    *(volatile uint32_t *)0x04000448 = 1;
}
