#include "ffc/types.h"

extern void *func_ov000_02163350(void);

void func_ov000_02163b64(void *a)
{
    uint8_t *p = (uint8_t *)func_ov000_02163350();
    *(void **)(p + 0x678) = a;
}
