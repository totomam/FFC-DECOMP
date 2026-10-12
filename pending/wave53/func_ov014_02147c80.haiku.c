#include "ffc/types.h"

extern void func_02053234(void *object);
extern void func_02005988(void *obj, const void *data);
extern void func_02061c70(void *out, void *in);
extern void func_020532a4(void *sub, void *local);
extern void func_02052d3c(void *p, void *q);
extern void func_02052c04(void *p);
extern void func_02052be0(void);
extern void func_02052d10(void *p, void *q);
extern void *func_02053290(void *object);
extern void *func_020059cc(void *object);
extern void func_ov014_02147df0(void *obj);
extern void func_ov014_02147e80(void *obj);
extern char data_ov014_02155aa8[];
extern char data_ov014_02155ab0[];

typedef struct S {
    uint32_t a;
    void *p;
    void *q;
    uint8_t flag;
} S;

typedef struct Obj {
    void *vt;
    S sub;
} Obj;

void *func_ov014_02147c80(void *self)
{
    Obj *o = (Obj *)self;
    uint32_t tmp[3];
    S local;
    S *l;

    o->vt = data_ov014_02155aa8;
    func_02053234(&o->sub);
    o->sub.p = 0;
    o->sub.flag = 0;
    func_02005988(tmp, data_ov014_02155ab0);
    l = &local;
    func_02061c70(l, tmp);
    func_020532a4(&o->sub, l);

    if ((void *)&l->p != (void *)&o->sub.p) {
        if (o->sub.p != 0) {
            if (o->sub.flag != 0) {
                func_02052d3c(o->sub.p, o->sub.q);
            }
            func_02052c04(o->sub.p);
        }
        o->sub.p = l->p;
        o->sub.q = l->q;
        o->sub.flag = l->flag;
        if (l->p != 0) {
            func_02052be0();
            if (o->sub.flag != 0) {
                func_02052d10(o->sub.p, o->sub.q);
            }
        }
    }

    if (local.p != 0) {
        if (l->flag != 0) {
            func_02052d3c(l->p, l->q);
        }
        func_02052c04(l->p);
    }

    func_02053290(l);
    func_020059cc(tmp);
    func_ov014_02147df0(o);
    func_ov014_02147e80(o);
    return o;
}
