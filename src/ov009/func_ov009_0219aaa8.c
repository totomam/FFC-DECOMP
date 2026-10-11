#include "ffc/types.h"

extern char data_ov009_021afd1c[];
extern void func_02061344(uint32_t x);
extern void *func_020059cc(void *object);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov009_0219aaa8(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    *(void **)obj = data_ov009_021afd1c;
    func_02061344(*(uint32_t *)(obj + 0x98));
    func_020059cc(obj + 0x88);
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
