#include "ffc/types.h"

extern uint32_t func_020655b8(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *p);
extern uint32_t func_0203c044(uint32_t n);
extern uint32_t func_0203c058(uint32_t n);
extern uint32_t func_0203b6fc(void);

void func_ov011_021c6554(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t *flag = *(uint32_t **)(p + 0xb8);
    uint32_t v;
    void *r7;
    uint32_t a, b, c;
    uint8_t *q;

    *flag = 1;
    v = func_020655b8(*(void **)(*(uint8_t **)(p + 0xd4) + 0x94));
    func_02056bc0(p + 0x14, (void *)v);
    r7 = func_02056aec(p);
    a = func_0203c044(30);
    b = func_0203c058(30);
    c = func_0203b6fc();
    func_02056bc0((void *)c, (void *)b);
    func_02056bc0((void *)c, (void *)a);
    q = p + 0x14;
    func_02056bc0(q, (void *)c);
    func_02056bc0(q, r7);
}
