#include "ffc/types.h"

extern void func_020162a0(void *out, uint32_t x);
extern void *func_02052d90(void *a, void *b);
extern void func_0201b180(uint32_t a, uint32_t b, uint32_t c);
extern void *func_0205681c(uint32_t size);
extern void *func_02041db4(void *a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *obj, void *node);
extern void func_02056c9c(void *obj, uint32_t arg);
extern uint32_t func_0203b9b4(uint32_t x);
extern void func_02057958(uint32_t x);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *o);

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern char data_020b0020[];
extern uint32_t data_020b0104[];
extern uint32_t data_020b010c[];

typedef struct {
    uint32_t w0;
    void *p4;
    void *p8;
    uint8_t f12;
} Tmp;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef uint32_t (*VFn)(void *, uint32_t);

void func_0204a024(uint8_t *self, uint32_t idx)
{
    Tmp t;
    Tmp *tp;
    uint8_t *res;
    uint8_t *o;
    uint8_t *base;
    void *obj;
    VFn fn;
    uint16_t v;

    if (self[0x9d] == 0) {
        func_020162a0(&t, data_020b8e44);
        base = (uint8_t *)func_02052d90(t.p4, t.p8);
        v = *(uint16_t *)(base + *(uint32_t *)(base + 0x18) + idx * 2);
        func_0201b180(data_020b93b8, 1, v);
        res = (uint8_t *)func_0205681c(0x5e << 2);
        if (res != 0) {
            res = (uint8_t *)func_02041db4(res, 0, v);
        }
        func_02056bc0(self + 0x14, res);

        o = (uint8_t *)func_0205681c(0x98);
        if (o != 0) {
            func_02056c9c(o, 0);
            *(char **)o = data_020b0020;
            *(uint8_t **)(o + 0x94) = self + 0x9d;
            *(uint8_t **)(o + 0x88) = res;
            *(uint32_t *)(o + 0x8c) = func_0203b9b4(1);
            func_02057958(*(uint32_t *)(o + 0x8c));
            obj = *(void **)(o + 0x8c);
            fn = *(VFn *)((uint8_t *)(*(void **)obj) + 0x24);
            *(uint32_t *)(o + 0x90) = fn(obj, 0);
            func_02056bc0(o + 0x48, *(void **)(o + 0x8c));
            *(Pair *)(o + 0x80) = *(Pair *)data_020b0104;
        }
        func_02056bc0(res + 0x48, o);

        tp = &t;
        if (tp->p4 != 0) {
            if (tp->f12 != 0) {
                func_02052d3c(tp->p4, tp->p8);
            }
            func_02052c04(tp->p4);
        }
        func_02053290(tp);
    }
    *(Pair *)(self + 0x80) = *(Pair *)data_020b010c;
}
