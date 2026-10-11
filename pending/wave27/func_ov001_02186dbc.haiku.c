#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

typedef struct {
    uint32_t val;
    uint32_t ref;
} Obj;

extern Obj *func_ov001_02185d80(uint32_t a, uint32_t b, uint32_t c, uint32_t d, S s);
extern Obj *func_ov000_02168b44(Obj *o, S *s);
extern uint32_t func_ov000_021658c0(uint32_t x);
extern void func_ov000_02168abc(Obj *o, S *s);

uint32_t func_ov001_02186dbc(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3)
{
    S s;
    Obj *o;
    uint32_t r;

    s.a = p1;
    o = func_ov001_02185d80(p0, p1, p2, p3, s);
    o = func_ov000_02168b44(o, &s);
    if (o != 0) {
        o->ref++;
        return o->val;
    }
    s.a = func_ov000_021658c0(p1);
    s.b = 1;
    o = func_ov001_02185d80(p0, p1, p2, p3, s);
    func_ov000_02168abc(o, &s);
    return s.a;
}
