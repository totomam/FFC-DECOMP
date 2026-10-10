#include "ffc/types.h"

extern void func_02064528(void *p);
extern void func_0205f470(void *p);

void func_ov007_0219bc38(void *a)
{
    func_02064528(a);
    func_0205f470(*(void **)(*(uint8_t **)((uint8_t *)a + 0x80) + 0x94));
}
