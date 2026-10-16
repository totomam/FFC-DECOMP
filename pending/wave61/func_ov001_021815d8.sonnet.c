#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; uint16_t c; uint32_t d; } S;
extern uint32_t func_ov000_0216591c(S *s);
extern uint32_t func_ov000_02168768(uint32_t x);
extern void func_ov000_02168784(uint32_t x, S *s);
int func_ov001_021815d8(uint8_t *self, uint16_t h, uint32_t v)
{
    S s = {0, 0, 0, 0};
    int r = 0;
    uint32_t n;
    s.a = *(uint32_t*)(self + 0x58);
    s.b = v;
    s.c = h;
    s.d = func_ov000_0216591c(&s);
    n = func_ov000_02168768(*(uint32_t*)(self + 0x60));
    func_ov000_02168784(*(uint32_t*)(self + 0x60), &s);
    if (n + 1 == func_ov000_02168768(*(uint32_t*)(self + 0x60))) r = 1;
    return r;
}
