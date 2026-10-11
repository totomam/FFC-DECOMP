#include "ffc/types.h"

extern uint32_t func_0207e5d0(void *object, uint32_t first, uint32_t second, uint32_t third);
extern void func_0207fa00(void);
extern void func_0207fa18(void);
extern uint8_t data_020a1ad0[];

typedef struct {
    uint32_t a0, a4, a8, ac, a10, a14, a18, a1c, a20, a24;
} S;

uint32_t func_0207fa34(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g) {
    S *s = (S *)((uint8_t *)obj + 0x28);
    s->a0 = a;
    s->a8 = c;
    s->a10 = e;
    s->a4 = b;
    s->ac = d;
    s->a18 = d;
    s->a14 = b;
    s->a20 = f ? f : (uint32_t)func_0207fa00;
    s->a24 = g ? g : (uint32_t)func_0207fa18;
    s->a1c = 0;
    return func_0207e5d0(obj, (uint32_t)s, (uint32_t)data_020a1ad0, 0);
}
