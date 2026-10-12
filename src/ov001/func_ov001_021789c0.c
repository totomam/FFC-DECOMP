#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);
extern void func_ov001_021780e8(void *a, int32_t b, int32_t c);

typedef struct Obj {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t pad[9];
    int32_t f38;
    int32_t f3c;
    int32_t f40;
} Obj;

typedef struct Msg {
    void (*fn)(void *, Obj *, int32_t);
    int32_t x;
    Obj *obj;
    int32_t mode;
} Msg;

void func_ov001_021789c0(void *a0, Msg *m)
{
    Obj *o;
    int32_t i;
    int32_t mode;

    m->fn(a0, m->obj, m->x);
    mode = m->mode;

    if (mode == 2) {
        func_ov000_021653f4((void *)m->obj->f8);
        m->obj->f8 = 0;
    } else if (mode == 0xb) {
        func_ov000_021653f4((void *)m->obj->f8);
        m->obj->f8 = 0;
    } else if (mode == 3) {
        o = m->obj;
        for (i = 0; i < o->f38; i++) {
            func_ov000_021653f4((void *)((int32_t *)o->f3c)[i]);
            ((int32_t *)o->f3c)[i] = 0;
            func_ov000_021653f4((void *)((int32_t *)o->f40)[i]);
            ((int32_t *)o->f40)[i] = 0;
        }
        func_ov000_021653f4((void *)o->f3c);
        o->f3c = 0;
        func_ov000_021653f4((void *)o->f40);
        o->f40 = 0;
    } else if (mode == 4) {
        o = m->obj;
        func_ov000_021653f4((void *)o->fc);
        o->fc = 0;
    } else if (mode == 7) {
        o = m->obj;
        if (o->f10 != 0) {
            func_ov000_021653f4((void *)o->f10);
            o->f10 = 0;
        }
    } else if (mode == 8) {
        o = m->obj;
        if (o->f8 != 0) {
            func_ov000_021653f4((void *)o->f8);
            o->f8 = 0;
        }
    } else if (mode == 9) {
        int32_t j;
        Obj *p = m->obj;
        for (j = 0; j < p->f4; j++) {
            func_ov000_021653f4((void *)((int32_t *)p->f8)[j]);
            ((int32_t *)p->f8)[j] = 0;
        }
        func_ov000_021653f4((void *)p->f8);
        p->f8 = 0;
    } else if (mode == 0xc) {
        o = m->obj;
        func_ov001_021780e8(a0, o->f0, 0);
    } else if (mode == 0xd) {
        o = m->obj;
        if (o->f8 != 0) {
            func_ov000_021653f4((void *)o->f8);
            o->f8 = 0;
        }
    } else if (mode == 0xe) {
        Obj *p = m->obj;
        if (p->fc != 0) {
            for (i = 0; i < p->fc; i++) {
                func_ov000_021653f4((void *)((int32_t *)p->f4)[i]);
                ((int32_t *)p->f4)[i] = 0;
                func_ov000_021653f4((void *)((int32_t *)p->f8)[i]);
                ((int32_t *)p->f8)[i] = 0;
            }
            func_ov000_021653f4((void *)p->f4);
            p->f4 = 0;
            func_ov000_021653f4((void *)p->f8);
            p->f8 = 0;
        }
    } else if (mode == 0xf) {
        o = m->obj;
        if (o->f10 != 0) {
            func_ov000_021653f4((void *)o->f10);
            o->f10 = 0;
        }
    }

    func_ov000_021653f4((void *)m->obj);
    m->obj = 0;
    func_ov000_021653f4(m);
}
