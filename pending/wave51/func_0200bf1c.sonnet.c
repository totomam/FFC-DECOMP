#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } P;
extern uint32_t func_02062a78(void *obj, P p, P q, uint32_t r, uint32_t s);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void *func_0200bf1c(uint8_t *self) {
    P c, a, b;
    uint32_t r5, r6;
    void *r4;
    a.b = *(uint32_t *)(self + 0xb4) + *(uint32_t *)(self + 0xa8);
    a.a = *(uint32_t *)(self + 0xb0) + *(uint32_t *)(self + 0xa4);
    b.a = a.a;
    b.b = a.b + 0x60;
    r6 = func_02062a78(*(void **)(self + 0x94), a, b, 0x14, 2);
    c.a = *(uint32_t *)(self + 0xb0);
    c.b = *(uint32_t *)(self + 0xb4) + 0x60;
    r5 = func_02062a78(*(void **)(self + 0x98), *(P *)(self + 0xb0), c, 0x14, 2);
    r4 = func_0203b6fc();
    func_02056bc0(r4, (void *)r5);
    func_02056bc0(r4, (void *)r6);
    return r4;
}
