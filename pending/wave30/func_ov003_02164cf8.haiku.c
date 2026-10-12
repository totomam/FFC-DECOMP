#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t v);
extern void *func_020424e0(void *obj);
extern void *func_ov003_02149708(void *obj, uint16_t id);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);

void func_ov003_02164cf8(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint16_t n;
    void *r;

    *(uint16_t *)(p + 0x84) = func_ov003_021481c0(*(uint16_t *)(p + 0x84));
    n = *(uint16_t *)(p + 0x84);
    if (n != 0) {
        r = func_ov003_02149708(func_020424e0(*(void **)(p + 0x80)), n);
        func_02056bc0(p + 0x14, r);
    }
    func_02056bc0(p + 0x14, func_02056aec(p));
}
