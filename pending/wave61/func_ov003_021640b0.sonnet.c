#include "ffc/types.h"
typedef struct { uint16_t a; uint16_t p0; uint16_t b; uint16_t p1; uint8_t c; } S;
typedef struct { int32_t x, y; } V;
extern uint32_t data_ov003_0217a774;
extern void *data_020b8e44;
extern void func_0201805c(V *o, void *a, int b);
extern uint16_t func_02018104(void *a, int b);
uint8_t *func_ov003_021640b0(uint8_t *self, int p1, int p2, int p3, S s) {
    typedef struct { int pad[4]; V q; } W; V u, v; W ww;
    *(uint32_t*)(self + 0xc) &= ~0xff;
    *(void**)self = &data_ov003_0217a774;
    *(int*)(self + 0x14) = p1;
    func_0201805c(&v, data_020b8e44, p3);
    ww.q = v;
    u.y = ww.q.y << 12;
    u.x = ww.q.x << 12;
    *(V*)(self + 0x18) = u;
    *(uint16_t*)(self + 0x20) = p2;
    *(uint16_t*)(self + 0x22) = func_02018104(data_020b8e44, p3);
    *(uint16_t*)(self + 0x24) = s.a;
    *(uint16_t*)(self + 0x26) = s.b;
    *(uint8_t*)(self + 0x28) = s.c;
    return self;
}
