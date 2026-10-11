#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);

void *func_020337c4(void *self)
{
    func_020059cc((uint8_t *)self + 0xa4);
    func_020059cc((uint8_t *)self + 0x98);
    func_020059cc((uint8_t *)self + 0x8c);
    func_020059cc((uint8_t *)self + 0x80);
    func_02056db0(self);
    return self;
}
