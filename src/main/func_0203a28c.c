#include "ffc/types.h"
extern void func_020396c4(void *p);
extern void func_02036750(void *p);
extern uint32_t data_020ae920;
typedef struct { int32_t a; int32_t b; uint8_t c0, c1, c2, c3, c4; } S;
void *func_0203a28c(uint32_t *self, uint32_t v) {
    S *s;
    func_020396c4(self);
    *self = (uint32_t)&data_020ae920;
    s = (S*)((uint8_t*)self + 0x88);
    s->a = 6;
    s = (S*)((uint8_t*)self + 0x88);
    s->b = 0;
    s->c0 = 0; s->c1 = 0; s->c2 = 0; s->c3 = 0; s->c4 = 0;
    func_02036750((uint8_t*)s + 0x10);
    *(uint32_t*)((uint8_t*)self + 0xf0) = v;
    return self;
}
