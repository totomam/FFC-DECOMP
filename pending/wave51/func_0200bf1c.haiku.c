#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Trip;

extern uint32_t func_02062a78(void *obj, Trip t, uint32_t p, uint32_t q, uint32_t r);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void *func_0200bf1c(uint8_t *self) {
    uint32_t x = *(uint32_t *)(self + 0xb4) + *(uint32_t *)(self + 0xa8);
    uint32_t y = *(uint32_t *)(self + 0xb0) + *(uint32_t *)(self + 0xa4);
    uint32_t *p = (uint32_t *)(self + 0xb0);
    uint32_t r5, r6;
    void *r4;
    Trip t;
    t.a = y;
    t.b = x;
    t.c = y;
    r6 = func_02062a78(*(void **)(self + 0x94), t, x + 0x60, 0x14, 2);
    t.a = p[0];
    t.b = p[1];
    t.c = p[0];
    r5 = func_02062a78(*(void **)(self + 0x98), t, p[1] + 0x60, 0x14, 2);
    r4 = func_0203b6fc();
    func_02056bc0(r4, (void *)r5);
    func_02056bc0(r4, (void *)r6);
    return r4;
}
