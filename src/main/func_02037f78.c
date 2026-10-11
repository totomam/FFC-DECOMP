#include "ffc/types.h"

extern void func_0209d02c(void *obj, uint32_t a, uint32_t size, void (*fn)(void));
extern void func_02056844(void *obj);
extern void func_02037b90(void);

void *func_02037f78(void *p)
{
    func_0209d02c((uint8_t *)p + 0x1c, 2, 0x160, func_02037b90);
    func_02056844(p);
    return p;
}
