#include "ffc/types.h"
extern uint32_t func_02056aec(void *o);
extern uint32_t func_0203c114(uint32_t a, uint32_t b);
extern void *func_02056b10(void *owner);
extern uint32_t func_0203b708(uint32_t a);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0209de58;
extern uint32_t data_0209de54;
extern uint32_t data_0209de5c;
void func_ov010_021bd90c(uint8_t *self)
{
    void *a, *b, *c, *d, *p;
    **(uint32_t **)(self + 0xe0) = 9;
    a = (void *)func_02056aec(self);
    b = (void *)func_0203c114(data_0209de58, data_0209de54);
    c = func_02056b10(*(void **)(self + 0xf0));
    d = (void *)func_0203b708(data_0209de5c);
    p = self + 0x14;
    func_02056bc0(p, d);
    func_02056bc0(p, c);
    func_02056bc0(p, b);
    func_02056bc0(p, a);
}
