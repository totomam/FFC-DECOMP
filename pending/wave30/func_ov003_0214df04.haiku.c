#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov003_021785b0(void *obj, void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0214df04(uint8_t *p, void *a, void *b)
{
    void *obj;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint8_t en;
    uint16_t old;

    if (*(void **)(p + 0x418) != 0) {
        return;
    }
    obj = func_0205681c(0xc8);
    if (obj != 0) {
        obj = func_ov003_021785b0(obj, a, b);
    }
    old = *ime;
    *ime = 0;
    en = (old != 0);
    *(void **)(p + 0x418) = obj;
    func_02056bc0(*(void **)(p + 0x194), obj);
    (void)*ime;
    *ime = en;
}
