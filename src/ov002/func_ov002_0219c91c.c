#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02055a5c(void *p);
extern void *func_020059cc(void *object);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov002_0219c91c(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    func_0200d5ec(obj + 0x10C);
    func_02055a5c(obj + 0xE0);
    func_020059cc(obj + 0xD0);
    func_020558d8(obj + 0x80);
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
