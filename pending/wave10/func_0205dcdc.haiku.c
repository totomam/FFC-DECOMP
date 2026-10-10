#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;
typedef struct { uint32_t w[3]; } L12;
typedef struct { uint8_t a; uint8_t c[3]; uint8_t b; uint8_t d[3]; } S5;
typedef struct Obj {
    void *vt;
    uint8_t pad0[0x18];
    uint32_t f1c;
    uint8_t pad1[0x14];
    uint8_t f34[4];
} Obj;

extern void func_02062930(Obj *obj, S8 s);
extern void func_020095b8(L12 *obj, uint32_t v);
extern void func_0205d508(void *obj, L12 *p, uint32_t z);
extern void *func_020059cc(void *object);
extern void func_0205df08(Obj *obj, uint32_t v, uint8_t a, uint8_t b);
extern uint8_t data_020b0fd8[];

Obj *func_0205dcdc(Obj *o, uint32_t p1, uint32_t p2, uint32_t p3, S5 s)
{
    S8 init;
    L12 l;

    init.a = 5;
    init.b = 5;
    func_02062930(o, init);
    o->f1c = p1;
    o->vt = (void *)data_020b0fd8;
    func_020095b8(&l, p2);
    func_0205d508(&o->f34, &l, 0);
    func_020059cc(&l);
    func_0205df08(o, p3, s.a, s.b);
    return o;
}
