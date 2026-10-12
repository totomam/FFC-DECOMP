#include "ffc/types.h"

extern void func_02056858(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern char data_020b25e0[];

void *func_020752e4(void *p)
{
    uint8_t *self = (uint8_t *)p;

    *(void **)self = data_020b25e0;
    func_02056858(*(void **)(self + 0x94));
    *(void **)(self + 0x94) = 0;
    func_02056858(*(void **)(self + 0x8c));
    *(void **)(self + 0x8c) = 0;
    func_02056db0(self);
    func_02056844(self);
    return self;
}
