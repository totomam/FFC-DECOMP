#include "ffc/types.h"

extern void func_0207e0f4(void *p, int a, int b, int c, ...);

void func_0207e8dc(void *p, uint32_t a, uint32_t b)
{
    uint32_t flag;
    uint32_t buf[3];

    *(void **)((uint8_t *)p + 0x10) = buf;
    flag = (*(uint32_t *)((uint8_t *)p + 0xc) & 0x20) ? 1 : 0;
    func_0207e0f4(p, 5, 1, flag, flag, a, b);
}
