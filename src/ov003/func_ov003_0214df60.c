/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02056bf4(void *a, void *b);
struct Obj { virtual void f0(); virtual void f1(); };
extern "C" void func_ov003_0214df60(uint8_t *p)
{
    Obj *obj = *(Obj **)(p + 0x418);
    if (obj == 0) return;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old = *ime;
    *ime = 0;
    volatile uint8_t flag = old ? 1 : 0;
    func_02056bf4(*(void **)(p + 0x194), *(void **)(p + 0x418));
    *(Obj **)(p + 0x418) = 0;
    (void)*ime;
    *ime = flag;
    if (obj) obj->f1();
}
