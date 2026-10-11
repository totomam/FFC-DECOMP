#include "ffc/types.h"

extern void *func_ov000_02159150(void *p);
extern void *data_ov000_0217002c;

void func_ov000_021591a8(void *a, void *b)
{
    if (b != 0) {
        uint32_t *p = (uint32_t *)func_ov000_02159150(b);
        ((void (*)(void *, void *, uint32_t))data_ov000_0217002c)(a, p, p[1] + 0x20);
    }
}
