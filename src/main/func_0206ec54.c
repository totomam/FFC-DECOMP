#include "ffc/types.h"

extern void func_0206ec80(void *obj);
extern void func_0204e3e8(void (*fn)(void *), void *arg);
typedef struct { uint32_t x, y; } P;
extern P data_020b2060;

void func_0206ec54(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    P *q;
    p[0x88] = 0;
    func_0204e3e8(func_0206ec80, obj);
    q = (P *)(p + 0x80);
    *q = data_020b2060;
}
