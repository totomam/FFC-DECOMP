#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void *func_020655dc(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_020655b8(void *obj);
extern void func_ov012_021d213c(void *p);
extern void func_02021338(uint32_t v);

void func_ov012_021d2880(uint8_t *p)
{
    void *obj = *(void **)(p + 0x98);
    void (*fn)(void *, uint32_t, uint32_t) = *(void (**)(void *, uint32_t, uint32_t))(*(uint32_t *)obj + 0x38);
    uint8_t *q;
    void *r6;
    uint32_t r0;

    fn(obj, 2, 1);

    r6 = func_020655dc(*(void **)(p + 0x98), 4, 0);
    r0 = func_020655b8(*(void **)(p + 0x98));

    q = p + 0x14;
    func_02056bc0(q, (void *)r0);
    func_02056bc0(q, r6);

    func_ov012_021d213c(*(void **)(p + 0x94));
    func_02021338(0xb3);
}
