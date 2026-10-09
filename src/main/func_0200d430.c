#include "ffc/types.h"

extern void *func_0204f45c(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_0200d430(void *p)
{
    func_0204f45c((uint8_t *)p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
