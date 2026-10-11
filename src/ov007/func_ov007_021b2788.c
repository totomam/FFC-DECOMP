#include "ffc/types.h"

extern void func_02056858(void *p);

void func_ov007_021b2788(uint8_t *base)
{
    void *p = *(void **)(base + 0x2d0c);
    if (p != 0) {
        func_02056858(p);
        *(void **)(base + 0x2d0c) = 0;
    }
}
