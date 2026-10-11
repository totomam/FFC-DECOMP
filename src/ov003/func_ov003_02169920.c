#include "ffc/types.h"

extern void func_020424e0(uint32_t x);
extern uint8_t *func_ov003_02146494(void);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern char data_ov003_0217af8c[];

void *func_ov003_02169920(void *p)
{
    uint8_t *self = (uint8_t *)p;
    *(char **)self = data_ov003_0217af8c;
    func_020424e0(*(uint32_t *)(self + 0x88));
    *(uint32_t *)(func_ov003_02146494() + 0xe0) = 0;
    func_02056db0(self);
    func_02056844(self);
    return self;
}
