#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern uint32_t func_020655b8(uint32_t v);
extern uint32_t func_020655dc(uint32_t v, uint32_t a, uint32_t b);
extern void *func_02021610(uint32_t a, uint32_t b);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b708(uint32_t a);

void func_ov007_021a2e34(void *p, void *arg)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t *obj;
    uint32_t a, b, c;
    void *d, *e, *f;

    if (arg != *(void **)(self + 0xb8)) {
        return;
    }
    a = func_02056aec();
    obj = *(uint8_t **)(self + 0xb8);
    b = func_020655b8(*(uint32_t *)(obj + 0x94));
    c = func_020655dc(*(uint32_t *)(obj + 0x94), 4, 0);
    d = func_02021610(0xb3, 0);
    e = func_0203b688();
    func_02056bc0(e, d);
    func_02056bc0(e, (void *)c);
    func_02056bc0(e, (void *)b);
    f = func_0203b708(0x1e);
    func_02056bc0(self + 0x14, f);
    func_02056bc0(self + 0x14, e);
    func_02056bc0(self + 0x14, (void *)a);
}
