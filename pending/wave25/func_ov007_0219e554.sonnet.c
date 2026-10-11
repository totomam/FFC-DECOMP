#include "ffc/types.h"
typedef struct { int32_t a, b; } S;
extern uint32_t func_02062a78(uint32_t x, S s, S t, int32_t f);
extern void func_02056bc0(void *object, void *node);
void func_ov007_0219e554(uint8_t *p)
{
    S s, t; volatile int32_t z;
    s.a=-512; z=0; t.a=0; t.b=0; s.b=0;
    func_02056bc0(p + 0x14, (void *)func_02062a78(*(uint32_t *)(p + 0x80), s, t, 600));
}
