#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020424e0(uint32_t x);
extern void *func_ov003_0217706c(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0216950c(uint8_t *p)
{
    void *r6 = func_02056aec(p);
    void *r4 = func_0205681c(0x84);
    if (r4 != 0) {
        uint32_t v = func_020424e0(*(uint32_t *)(p + 0x80));
        r4 = func_ov003_0217706c(r4, v);
    }
    p = (uint8_t *)((uint32_t)p + 0x14);
    func_02056bc0(p, r4);
    func_02056bc0(p, r6);
}
