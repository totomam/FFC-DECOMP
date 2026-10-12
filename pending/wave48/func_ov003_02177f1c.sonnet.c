/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" uint32_t func_0203b75c(uint32_t);
extern "C" void *func_0205681c(uint32_t);
extern "C" void *func_ov003_0217765c(void *, void *, uint32_t, uint32_t);
extern "C" void func_02056bc0(void *, void *);
extern "C" void func_02021338(uint32_t);
extern "C" uint32_t func_0209a4cc(void);
extern "C" uint32_t func_0209af28(uint32_t, uint32_t);
extern "C" uint32_t func_0209ab90(uint32_t);
extern "C" uint32_t func_02064390(void *, uint32_t, uint32_t);
extern "C" uint32_t func_020685b8(void *, uint32_t, uint32_t);
extern "C" uint32_t data_ov003_0217bc58[];

struct VB {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void call(uint32_t, uint32_t);
};
typedef struct Obj {
    uint32_t w00, w04, w08, w0c, w10;
    uint8_t sub14[0x80 - 0x14];
    VB *p80;
    VB *p84;
    void *p88;
    void *p8c;
    uint32_t w90;
    uint32_t w94;
    uint32_t w98;
} Obj;

extern "C" void func_ov003_02177f1c(Obj *o)
{
    switch (o->w94) {
    case 0: {
        uint32_t r6 = func_0203b75c(1);
        void *node;
        void *mem = func_0205681c(0x90);
        node = mem;
        if (mem != 0) {
            node = func_ov003_0217765c(mem, o->p80, data_ov003_0217bc58[1], 0);
        }
        void *obj = &o->sub14;
        func_02056bc0(obj, node);
        func_02056bc0(obj, (void *)r6);
        o->w94 = o->w94 + 1;
        break;
    }
    case 1: {
        uint32_t t;
        void *q; VB *vq;
        if (o->w90 == 0) {
            func_02021338(0x171);
        }
        o->w90++;
        t = func_0209a4cc();
        o->w98 = func_0209af28(0x41cccccd, t);
        vq = o->p80;
        if (vq != 0) {
            vq->call(func_0209ab90(o->w98), 0x70);
        }
        vq = o->p84;
        if (vq != 0) {
            vq->call(func_0209ab90(o->w98) + 4, 0x84);
        }
        q = o->p88;
        if (q != 0) {
            uint32_t a = func_0209ab90(o->w98);
            func_02064390(q, a + 2, 0x73);
        }
        q = o->p8c;
        if (q != 0) {
            uint32_t a = func_0209ab90(o->w98);
            func_020685b8(q, a + 0xa, 0x77);
        }
        if (o->w90 >= 0xa) {
            o->w0c = (o->w0c & ~0xffu) | 2;
        }
        break;
    }
    default:
        break;
    }
}
