#include "ffc/types.h"

extern void func_020644a0(void *p);
extern void func_0205f498(void *p);

void func_ov007_0219bc50(void *a)
{
    func_020644a0(a);
    func_0205f498(*(void **)(*(uint8_t **)((uint8_t *)a + 0x80) + 0x94));
}
