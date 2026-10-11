#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void *func_020059cc(void *object);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern char data_020ae0f8[];

void *func_020325ec(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    *(void **)p = data_020ae0f8;
    func_02056c4c(p + 0x14);
    func_02056c4c(p + 0x48);
    func_020059cc(p + 0x90);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
