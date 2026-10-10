#include "ffc/types.h"

extern void *func_ov000_02163350(void *p);
extern void func_ov000_021604bc(void *p);

void func_ov000_0215e0bc(void *a)
{
    uint8_t *b = (uint8_t *)func_ov000_02163350(a);
    if (b[0x629] != 1) {
        func_ov000_021604bc(a);
    }
}
