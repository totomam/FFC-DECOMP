#include "ffc/types.h"

extern void func_020553c4(void *p);
extern void func_020553e8(void *p);
extern uint32_t func_02056830(void);
extern void func_02056858(uint32_t x);
extern void func_02075e3c(void *a, void *b, uint32_t c, uint32_t d);

typedef struct Obj Obj;
typedef struct Vt {
    void *f0;
    void *f1;
    uint32_t (*f2)(Obj *);
    void (*f3)(Obj *, uint32_t);
} Vt;
struct Obj {
    Vt *vt;
};

void func_02075df8(void *a, void *b, void *obj)
{
    uint32_t t;
    uint32_t r;

    func_020553c4(obj);
    r = ((Obj *)obj)->vt->f2((Obj *)obj);
    t = func_02056830();
    ((Obj *)obj)->vt->f3((Obj *)obj, t);
    func_02075e3c(a, b, t, r);
    func_02056858(t);
    func_020553e8(obj);
}
