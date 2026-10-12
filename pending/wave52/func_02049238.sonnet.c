/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct {uint32_t a,b;} P;
extern P data_020afec8;
extern uint32_t data_020b8e44;
extern P data_020afed0;
extern "C" void func_02037568(void);
extern "C" void func_020173b0(void *dst, uint32_t v);
extern "C" void *func_02052d90(void *a, uint32_t b);
extern "C" void func_02056bc0(void *obj, void *node);
extern "C" void func_02052d3c(void *a, uint32_t b);
extern "C" void func_02052c04(void *a);
extern "C" void *func_02053290(void *obj);

typedef struct {
    uint32_t w0;
    void *p4;
    void *p8;
    uint8_t flag;
} Tmp;

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual uint32_t v4(uint32_t, uint32_t);
    uint8_t pad04[0x14 - 4];
    uint8_t sub14[0x80 - 0x14];
    P f80;
    uint32_t f88;
};

typedef uint32_t (*VFn)(void *, uint32_t, uint32_t);

extern "C" void func_02049238(void *obj)
{
    Obj *o = (Obj *)obj;
    uint32_t idx;
    uint32_t lo;
    uint32_t hi;
    void *m;
    uint8_t *base;
    uint8_t *e;
    uint32_t r;

    if (o->f88 == 0xFFFFFFFFu) {
        func_02037568();
        uint32_t x=data_020afec8.a, y=data_020afec8.b; o->f80.b=y; o->f80.a=x;
        return;
    }
    {
        Tmp t;
        Tmp *tp = &t;

        func_020173b0(tp, data_020b8e44);
        idx = o->f88;
        m = func_02052d90(tp->p4, (uint32_t)tp->p8);
        base = (uint8_t *)m + *(uint32_t *)((uint8_t *)m + 0x34);
        e = base + (idx << 3);
        r = o->v4( *(uint16_t *)(e + 2), e[0]);
        func_02056bc0(&o->sub14, (void *)r);
        uint32_t x=data_020afed0.a, y=data_020afed0.b; o->f80.b=y; o->f80.a=x;
        if (tp->p4 != 0) {
            if (tp->flag != 0) {
                func_02052d3c(tp->p4, (uint32_t)tp->p8);
            }
            func_02052c04(tp->p4);
        }
        func_02053290(tp);
    }
}
