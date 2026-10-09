#include "ffc/types.h"

extern void *func_0200d5ec(void *object);
extern void func_020641a4(void *object);
extern void func_02056844(void *object);

void *func_0200d88c(void *p)
{
    func_0200d5ec((uint8_t *)p + 0x80);
    func_020641a4(p);
    func_02056844(p);
    return p;
}
