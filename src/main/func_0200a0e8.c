#include "ffc/types.h"

typedef struct Pair { uint32_t a, b; } Pair;
typedef void (*VFn)(void *);

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} Obj;

typedef struct Mar {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} Mar;

typedef struct Tmp {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t flag;
} Tmp;

typedef struct Frame {
    uint32_t pre[3];
    Tmp t;
} Frame;

extern uint32_t func_02055054(uint32_t v);
extern void func_02021338(uint32_t v);
extern uint32_t func_02068680(void *o);
extern void func_02068658(void *o);
extern void func_02068514(void *o, uint32_t v);
extern void func_02019548(void *dst, uint32_t src);
extern void *func_02052d90(uint32_t mar, uint32_t index);
extern void func_02068580(void *o, uint32_t v);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *o);
extern uint32_t data_0213e098;
extern uint32_t data_020aaf14[2];
extern uint32_t data_020b8e44;

void func_0200a0e8(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t r4;
    Frame fr;

    if ((int8_t)((Obj *)(*(void **)(s + 0x98)))->fc == 1) {
        VFn *vt = *(VFn **)(*(void **)(s + 0xa4));
        vt[10](*(void **)(s + 0xa4));
        {
            Mar *m = *(Mar **)(s + 0x94);
            uint32_t x = m->f4;
            uint32_t y = m->f8;
            r4 = 0;
            if (((x ^ y) & x) & 0x130b) {
                r4 = 1;
            } else if (x & 0x30a) {
                *(uint32_t *)(s + 0xa8) += func_02055054(data_0213e098);
                if (*(uint32_t *)(s + 0xa8) >= 0x12) {
                    r4 = 1;
                }
            } else {
                *(uint32_t *)(s + 0xa8) = r4;
            }
        }
        if (r4 == 0) {
            return;
        }
        *(uint32_t *)(s + 0xa8) = 0;
        func_02021338(0xb6);
        if (func_02068680(*(void **)(s + 0x98)) != 0) {
            *(Pair *)(s + 0x80) = *(Pair *)data_020aaf14;
            return;
        }
        vt = *(VFn **)(*(void **)(s + 0xa4));
        vt[11](*(void **)(s + 0xa4));
        func_02068658(*(void **)(s + 0x98));
        func_02068514(*(void **)(s + 0x98), 0x2000);
        ((Obj *)(*(void **)(s + 0x98)))->fc &= ~0xffu;
        return;
    } else {
        Mar *m = *(Mar **)(s + 0x94);
        uint32_t x = m->f4;
        uint32_t y = m->f8;
        if (((x ^ y) & x) & 0x130b) {
            func_02021338(0xd7);
            func_02068514(*(void **)(s + 0x98), 0);
            *(uint32_t *)(s + 0xa8) = 0;
            return;
        }
        if ((x & 0x30a) == 0) {
            return;
        }
        Tmp *tp = &fr.t;
        func_02019548(tp, data_020b8e44);
        {
            Obj **pp = (Obj **)(s + 0x98);
            uint32_t v = ((Obj *)func_02052d90(fr.t.f4, fr.t.f8))->fc;
            func_02068580(*pp, v);
        }
        if (fr.t.f4 != 0) {
            if (tp->flag != 0) {
                func_02052d3c(tp->f4, tp->f8);
            }
            func_02052c04(tp->f4);
        }
        func_02053290(tp);
    }
}
