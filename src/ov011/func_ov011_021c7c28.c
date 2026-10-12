/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern "C" {
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020159f8(uint32_t a);
extern void *func_0203b9cc(Pair p, uint32_t h, uint32_t one);
extern void *func_02066878(void *object);
extern void func_0205fdc8(void *object, uint32_t value);
extern void *func_0203b878(void *object, uint32_t h);
extern void func_02056bc0(void *object, void *node);
extern void func_0200a630(void *dst, uint32_t v);
extern void func_02068e18(void *object, void *arg);
extern void *func_0200a678(void *object);
extern void func_020095b8(void *dst, void *src);
extern void func_02068ddc(void *object, void *arg);
extern void *func_020059cc(void *object);
extern uint32_t func_020367b8(void *object);

extern uint32_t data_020b8e44;
extern Pair data_ov011_021cbad0;
extern Pair data_ov011_021cbad8;
extern Pair data_ov011_021cbae0;

}
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(Pair); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(uint32_t); virtual void v9(); virtual void v10(); };
extern "C" void func_ov011_021c7c28(uint8_t *p, uint32_t arg)
{
    uint32_t *g = &data_020b8e44;
    uint32_t h;
    void *o;
    uint32_t pa[2];
    uint32_t pb[2];
    uint32_t pc[2];
    uint32_t t1[3];
    uint32_t t2[3];
    uint32_t t3[3];

    h = func_02015a38(*g, 0, 10, 1);

    pa[0] = 0xa0;
    pa[1] = 0x10;
    o = func_0203b9cc(*(Pair *)pa, func_020159f8(*g), 1);
    func_0205fdc8(func_02066878(o), 1);
    o = func_0203b878(o, h);
    func_02056bc0(p + 0x48, o);
    ((Obj*)o)->v3(data_ov011_021cbad0);
    ((Obj*)o)->v8(3);
    ((Obj*)o)->v10();

    func_0200a630(t1, arg);
    func_02068e18(o, t1);
    func_0200a678(t1);

    pb[0] = 0xa0;
    pb[1] = 0x10;
    o = func_0203b9cc(*(Pair *)pb, func_020159f8(*g), 1);
    func_0205fdc8(func_02066878(o), 1);
    o = func_0203b878(o, h);
    func_02056bc0(p + 0x48, o);
    ((Obj*)o)->v3(data_ov011_021cbad8);
    ((Obj*)o)->v8(3);
    ((Obj*)o)->v10();

    func_020095b8(t2, p + 0x134);
    func_02068ddc(o, t2);
    func_020059cc(t2);

    pc[0] = 0xa0;
    pc[1] = 0x10;
    o = func_0203b9cc(*(Pair *)pc, func_020159f8(*g), 1);
    func_0205fdc8(func_02066878(o), 1);
    o = func_0203b878(o, h);
    func_02056bc0(p + 0x48, o);
    ((Obj*)o)->v3(data_ov011_021cbae0);
    ((Obj*)o)->v8(3);
    ((Obj*)o)->v10();

    func_0200a630(t3, func_020367b8(p + 0x350));
    func_02068e18(o, t3);
    func_0200a678(t3);
}
