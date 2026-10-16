#include "ffc/types.h"
typedef void (*Fn)(void*);
void func_02069288(void *p)
{
    uint8_t *b = (uint8_t*)p;
    if (b[0x84] != 0) return;
    b[0x84] = 1;
    (*(Fn**)p)[8](p);
}
