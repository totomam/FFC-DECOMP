#include "ffc/types.h"

extern void func_02056bf4(uint32_t a, void *b);

void func_ov003_021526d4(uint8_t *p)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint8_t flag;
    uint16_t old;
    void *obj;

    old = *ime;
    *ime = 0;
    flag = (old != 0);
    obj = *(void **)(p + 0x88);
    if (obj) {
        func_02056bf4(*(uint32_t *)(p + 0xa4), obj);
        *(void **)(p + 0x88) = 0;
        *(uint32_t *)(p + 0xa8) = 0;
    }
    old = *ime;
    *ime = flag;
    if (obj) {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[1])(obj);
    }
}
