#include "ffc/types.h"

extern uint8_t data_ov009_021afd1c[];
extern void func_02061344(uint32_t x);
extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);

void *func_ov009_0219aa80(void *p)
{
    uint8_t *a = (uint8_t *)p;
    *(void **)a = (void *)data_ov009_021afd1c;
    func_02061344(*(uint32_t *)(a + 0x98));
    func_020059cc(a + 0x88);
    func_02056db0(a);
    return a;
}
