/* cflags: -lang c++ */
#include "ffc/types.h"

struct V4 { uint32_t w[4]; };
struct V6 { V4 v; int x; int y; };

struct Node {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual V4 pos();
};
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual V4 cur();
    virtual void v8(); virtual void v9();
    virtual void a10();
    virtual void a11();
    virtual int a12();
};

extern "C" {
extern void func_020628ac(Obj *obj, V4 a);
extern void func_02056c4c(void *obj);
extern void *func_ov005_02195e2c(Obj *obj, V4 a, V4 c, int x, int y);
extern void func_02056bc0(void *obj, void *node);
extern void func_0201e954(void *heap, uint32_t idx, void *out);
extern int func_ov008_0219c624(void *self, uint32_t idx);
extern void func_ov005_021963cc(void *obj, void *buf, uint32_t flag);
extern void func_ov005_021964c4(void *obj);
extern void *data_020b93b8;

#define F(o,off) (*(void **)((uint8_t *)(o) + (off)))
#define O(s) (*(Obj **)((uint8_t *)(s) + 0xe4))

void func_ov008_0219c4a0(void *self, Node *node) {
    V6 buf;
    uint8_t i;
    uint8_t *s = (uint8_t *)self;

    if (node == 0) {
        O(s)->a11();
        return;
    }
    if (O(s)->a12() != 0) {
        O(s)->a10();
        func_020628ac(O(s), node->pos());
    } else {
        func_02056c4c(F(s,0xe0));
                        func_02056bc0(F(s,0xe0), func_ov005_02195e2c(O(s), O(s)->cur(), node->pos(), 10, -5));
    }

    for (i = 0; i < 8; i++) {
        if (node == (*(Node ***)(s + 0xc4))[i]) {
            uint8_t v;
            s[0x107] = (uint8_t)i;
            v = (uint8_t)(s[0x107] + (s[0x105] << 3));
            if (v < *(uint32_t *)(s + 0xf0)) {
                func_0201e954(data_020b93b8, v, &buf);
                func_ov005_021963cc(F(s,0xe8), &buf, func_ov008_0219c624(self, v) == 0);
                return;
            }
        }
    }
    func_ov005_021964c4(F(s,0xe8));
}
}
