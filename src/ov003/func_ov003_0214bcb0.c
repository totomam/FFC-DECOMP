/* cflags: -lang c++ */
#include "ffc/types.h"

struct FfcPair { uint32_t a; uint32_t b; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void f0c(FfcPair p);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void f20(uint32_t a);
    virtual void v9();
    virtual void f28();
    virtual void v11(); virtual void v12(); virtual void v13();
    virtual void f38(uint32_t a, uint32_t b);
};
struct FfcLoc {
    uint32_t f0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
};

extern "C" {
extern void *data_020b8e44;
extern uint8_t *data_0213df18;
extern uint8_t data_ov003_02179914[];

void func_02016a94(void *out, void *v);
uint8_t *func_02052d90(void *mar, uint32_t index);
uint32_t func_02092948(void *a, void *b);
void func_ov003_0214bdfc(void *self, uint32_t flag);
void *func_0203b84c(void *a, uint32_t b);
void func_0205f818(void *obj, uint32_t v);
void func_02056bc0(void *object, void *node);
uint32_t func_02091b10(void *object, void *first, void *second);
Obj *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
void func_02052d3c(void *a, uint32_t b);
void func_02052c04(void *a);
void *func_02053290(void *object);

void func_ov003_0214bcb0(uint8_t *self, uint32_t flag, uint32_t index, FfcPair *args)
{
    uint8_t tmp[0x44];
    FfcLoc L;
    Obj *obj;
    uint8_t *m;
    uint8_t *m2;
    uint8_t *r7;
    uint8_t *n;
    uint32_t *q;
    uint32_t old;

    obj = flag ? *(Obj **)(self + 0x1dc) : *(Obj **)(self + 0x1d8);
    q = flag ? (uint32_t *)(self + 0x1e4) : (uint32_t *)(self + 0x1e0);

    func_02016a94(&L, data_020b8e44);
    m = func_02052d90(L.mar, L.idx);
    r7 = m + *(uint32_t *)(m + *(uint32_t *)(m + 0xc) + index * 4);
    old = *q;
    m2 = func_02052d90(L.mar, L.idx);
    n = m2 + *(uint32_t *)(m2 + *(uint32_t *)(m2 + 0xc) + old * 4);

    if (obj == 0 || func_02092948(r7 + *(uint32_t *)(r7 + 4), n + *(uint32_t *)(n + 4)) != 0) {
        func_ov003_0214bdfc(self, flag);
        if (flag) {
            obj = *(Obj **)(self + 0x1ac);
        } else {
            if (*(void **)(self + 0x1b0) == 0) {
                *(void **)(self + 0x1b0) = func_0203b84c(*(void **)(data_0213df18 + 0x24), 0x1e);
                func_0205f818(*(void **)(self + 0x1b0), 7);
                func_02056bc0(self + 0x48, *(void **)(self + 0x1b0));
            }
            obj = *(Obj **)(self + 0x1b0);
        }
        func_02091b10(tmp, data_ov003_02179914, r7 + *(uint32_t *)(r7 + 4));
        obj = func_0203b95c(tmp, obj, 0, 1);
        obj->f28();
        obj->f20(0);
        func_02056bc0(*(void **)(self + 0x188), obj);
    }

    obj->f38(*(uint16_t *)r7, 0);
    obj->f0c(*args++);
    *q = index;
    if (flag) {
        *(Obj **)(self + 0x1dc) = obj;
    } else {
        *(Obj **)(self + 0x1d8) = obj;
    }

    FfcLoc *lp = &L;
    if (lp->mar != 0) {
        if (lp->flag) {
            func_02052d3c(lp->mar, lp->idx);
        }
        func_02052c04(lp->mar);
    }
    func_02053290(lp);
}
}
