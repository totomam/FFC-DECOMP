#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

typedef struct {
    uint32_t val;
    uint32_t ref;
} Obj;

extern Obj *func_ov001_02185d80();
extern Obj *func_ov000_02168b44(Obj *o, S *s);
extern uint32_t func_ov000_021658c0(uint32_t x);
extern void func_ov000_02168abc(Obj *o, S *s);

uint32_t func_ov001_02186dbc(uint32_t p0, uint32_t p1)
{
    S s;
    Obj *o;

    s.a = p1;
    o = func_ov000_02168b44(func_ov001_02185d80(p0, p1), &s);
    if (o != 0) {
        o->ref++;
        return o->val;
    }
    s.a = func_ov000_021658c0(p1);
    s.b = 1;
    func_ov000_02168abc(func_ov001_02185d80(p0), &s);
    return s.a;
}
