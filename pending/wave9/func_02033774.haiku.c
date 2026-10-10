#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);

void *func_02033774(void *object)
{
    uint8_t *p = (uint8_t *)object;
    func_020059cc(p + 0x98);
    func_020059cc(p + 0x8c);
    func_020059cc(p + 0x80);
    func_02056db0(p);
    return p;
}
