/* cflags: -lang c++ */
#include "ffc/types.h"

struct O {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3(uint32_t a, uint32_t b);
    virtual void v4();virtual void v5();virtual void v6();virtual void v7();
    virtual void v8(uint32_t a);virtual void v9();virtual void v10();virtual void v11();
    virtual void v12();virtual void v13();virtual void v14(uint32_t a, uint32_t b);
};
struct P {
    uint8_t pad0[0x48];
    uint8_t list[0x70];
    uint32_t wl, wh;
    void *u;
    O *objs[12];
};

extern "C" {
extern char data_ov007_021c4e60[];
extern void *data_ov007_021c4d58[];
extern uint32_t data_ov007_021c4e00[];
extern O *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b81c(uint32_t a);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021ae310(void *q, uint32_t t);
extern void func_020695ec(void *p);
extern void func_020697ac(void *p, void *x);
extern O *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0209a6e0(uint32_t lo, uint32_t hi, uint32_t a, uint32_t b);
extern uint64_t func_0209a6d4(uint64_t v, uint32_t a, uint32_t b);
void func_ov007_021aac9c(P *p);
}

void func_ov007_021aac9c(P *p)
{
    O *obj = func_0203bb94(data_ov007_021c4e60, 1, 0, 0);
    obj->v10();
    obj->v8(2);
    func_02056bc0(p->list, obj);
    uint32_t t = func_0203b81c(30);
    void *x = func_0205681c(0x98);
    p->u = x ? func_ov007_021ae310(x, t) : x;
    func_020695ec(p);
    func_020697ac(p, p->u);
    uint8_t *lst = p->list;
    uint64_t *w = (uint64_t *)&p->wl;
    int8_t i = 11;
    do {
        p->objs[i] = func_0203b95c(data_ov007_021c4d58[1], t, 2, 1);
        uint32_t ret = func_0209a6e0(p->wl, p->wh, 10, 0);
        p->objs[i]->v14(ret + 1, 0);
        *w = func_0209a6d4(*w, 10, 0);
        p->objs[i]->v3(data_ov007_021c4e00[2*i], data_ov007_021c4e00[2*i+1]);
        p->objs[i]->v8(0);
        p->objs[i]->v10();
        func_02056bc0(lst, p->objs[i]);
        i--;
    } while (i >= 0);
    func_02056bc0(p->list, (void*)t);
}
