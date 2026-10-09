#include "ffc/types.h"

extern void *func_02050c28(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_ov003_0215c180(void *p)
{
    func_02050c28((uint8_t *)p + 0x8c);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
