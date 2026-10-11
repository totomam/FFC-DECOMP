#include "ffc/types.h"

extern void func_0206ec80(void *obj);
extern void func_0204e3e8(void (*fn)(void *), void *arg);
extern uint32_t data_020b2060[2];

void func_0206ec54(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint32_t a, b;
    p[0x88] = 0;
    func_0204e3e8(func_0206ec80, obj);
    a = data_020b2060[0];
    b = data_020b2060[1];
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
}
