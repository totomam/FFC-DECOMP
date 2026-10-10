#include "ffc/types.h"

extern void func_02064410(void *p);
extern void func_0205f3e0(void *x, uint32_t y);

void func_ov007_0219bbc4(uint8_t *a, uint32_t b)
{
    void *p;

    func_02064410(a);
    p = *(void **)(a + 0x80);
    func_0205f3e0(*(void **)((uint8_t *)p + 0x94), b);
}
