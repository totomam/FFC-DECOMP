#include "ffc/types.h"

extern uint32_t func_0203bc04(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02035ff4(void *object);

void func_ov009_0219d2fc(uint8_t *self, void *a, int32_t b)
{
    void *node;
    void **o;

    node = (void *)func_0203bc04(*(void **)(self + 0xa0), 1, 0, 0);
    *(void **)(self + 0xac) = node;
    func_02056bc0(*(void **)(self + 0x16c), node);

    o = *(void ***)(self + 0xac);
    ((void (*)(void *))((void **)o[0])[11])(o);
    o = *(void ***)(self + 0xac);
    ((void (*)(void *, uint32_t))((void **)o[0])[8])(o, 2);

    if (self[0x1ec] == 0 || b >= 3) return;
    if (func_02035ff4(a) != 0) return;
    if (self[0x1fc] != 0) return;
    o = *(void ***)(self + 0xac);
    ((void (*)(void *))((void **)o[0])[10])(o);
}
