#include "ffc/types.h"

extern uint32_t data_020afec8[];
extern uint32_t data_020b8e44;
extern uint32_t data_020afed0[];
extern void func_02037568(void);
extern void func_020173b0(void *dst, uint32_t v);
extern void *func_02052d90(void *a, uint32_t b);
extern void func_02056bc0(void *obj, void *node);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *obj);

typedef struct {
    uint32_t w0;
    void *p4;
    void *p8;
    uint8_t flag;
} Tmp;

typedef struct {
    void **vt;
    uint8_t pad04[0x14 - 4];
    uint8_t sub14[0x80 - 0x14];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
} Obj;

typedef uint32_t (*VFn)(void *, uint32_t, uint32_t);

void func_02049238(void *obj)
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
        lo = data_020afec8[0];
        hi = data_020afec8[1];
        o->f80 = lo;
        o->f84 = hi;
        return;
    }
    {
        Tmp t;
        Tmp *tp = &t;

        func_020173b0(tp, data_020b8e44);
        idx = o->f88;
        m = func_02052d90(t.p4, t.p8);
        base = (uint8_t *)m + *(uint32_t *)((uint8_t *)m + 0x34);
        e = base + (idx << 3);
        r = ((VFn)o->vt[4])(o, *(uint16_t *)(e + 2), e[0]);
        func_02056bc0(&o->sub14, (void *)r);
        lo = data_020afed0[0];
        hi = data_020afed0[1];
        o->f84 = hi;
        o->f80 = lo;
        if (t.p4 != 0) {
            if (t.flag != 0) {
                func_02052d3c(t.p4, (uint32_t)t.p8);
            }
            func_02052c04(t.p4);
        }
        func_02053290(tp);
    }
}
