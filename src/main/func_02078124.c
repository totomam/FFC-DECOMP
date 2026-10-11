#include "ffc/types.h"

extern void func_020780ac(uint32_t a);
extern void func_020780bc(uint32_t a);

void func_02078124(uint32_t a, uint32_t flags)
{
    if (flags & 1) {
        func_020780ac(a);
    }
    if (flags & 2) {
        func_020780bc(a);
    }
}
