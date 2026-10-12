#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern uint16_t func_ov003_021481c0(uint16_t);
extern int func_ov003_021464f4(uint32_t, uint16_t);
extern uint32_t *func_ov003_02155b40(void);
extern uint32_t func_020816d4(uint32_t, uint32_t);
extern uint32_t func_02056aec(void *);
extern uint32_t func_ov003_02149478(uint32_t, uint16_t, uint32_t, uint16_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_02056bc0(void *object, uint32_t node);

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    int32_t x;
    int32_t y;
} Obj;

void func_ov003_02164784(uint8_t *self)
{
    uint32_t r6;
    uint32_t r4;
    uint32_t r7;
    uint32_t res;
    int ok;
    Vec2 a;
    Vec2 b;

    r6 = func_020424e0(*(uint32_t *)(self + 0x80));
    *(uint16_t *)(self + 0x84) = func_ov003_021481c0(*(uint16_t *)(self + 0x84));

    ok = func_ov003_021464f4(r6, *(uint16_t *)(self + 0x84));
    r4 = 0;
    if (ok) {
        Obj *o = (Obj *)func_ov003_02155b40();
        a.x = *(int32_t *)(self + 0x94) - o->y;
        a.y = *(int32_t *)(self + 0x90) - o->x;
        b = a;
        r4 = func_020816d4(b.x, b.y);
    }

    r7 = func_02056aec(self);

    res = func_ov003_02149478(r6,
                              *(uint16_t *)(self + 0x84),
                              r4,
                              *(uint16_t *)(self + 0x86),
                              *(uint32_t *)(self + 0x88),
                              2,
                              *(uint32_t *)(self + 0x98),
                              *(uint32_t *)(self + 0x8c),
                              0);

    func_02056bc0(self + 0x14, res);
    func_02056bc0(self + 0x14, r7);
}
