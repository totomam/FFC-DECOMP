#include "ffc/types.h"

extern void func_02058048(void *a, uint32_t b, uint32_t c);

void func_02058188(void *a, void *p)
{
    func_02058048(a, *(uint32_t *)((uint8_t *)p + 0x4), 0);
}
