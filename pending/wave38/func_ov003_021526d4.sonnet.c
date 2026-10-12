/* cflags: -lang c++ */
#include "ffc/types.h"

struct O { virtual void v0(); virtual void v1(); };

extern "C" void func_02056bf4(uint32_t a, void *b);
extern "C" void func_ov003_021526d4(uint8_t *p);

extern "C" void func_ov003_021526d4(uint8_t *p)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint8_t flag;
    uint16_t old;
    O *obj;

    old = *ime;
    *ime = 0;
    flag = (old != 0);
    obj = *(O **)(p + 0x88);
    if (obj) {
        func_02056bf4(*(uint32_t *)(p + 0xa4), obj);
        *(void **)(p + 0x88) = 0;
        *(uint32_t *)(p + 0xa8) = 0;
    }
    old = *ime;
    *ime = flag;
    if (obj) { if (obj) obj->v1(); }
}
