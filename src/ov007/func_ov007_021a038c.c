#include "ffc/types.h"
extern void func_02056c4c(uint32_t a);
typedef void (*Fn)(void*, int, int);
typedef void (*Fn1)(void*);
void func_ov007_021a038c(uint8_t *p)
{
    uint8_t *q;
    int i;
    *(uint32_t*)(p + 0x170) = 0xb4;
    q = *(uint8_t**)(p + 0x13c);
    for (i = 0; i < 0x40; i++) q[0xb8 + i] = 0;
    func_02056c4c(*(uint32_t*)(q + 0xac));
    {
        void *o = *(void**)(q + 0xa8);
        (*(Fn**)o)[14](o, 1, 1);
    }
    {
        void *o = *(void**)(q + 0xa8);
        (*(Fn1**)o)[11](o);
    }
}
