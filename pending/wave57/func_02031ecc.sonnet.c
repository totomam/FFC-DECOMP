/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { int32_t a; int32_t b; ~Pair() {} };
struct Node {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual Pair getPos();
};
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void setPos(Pair p);
    virtual Pair getPos();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void m10(); virtual void m11(); virtual int m12();
};
extern "C" {
extern void func_02056c4c(void *p);
extern void *func_02062a78(Obj *o, Pair x, Pair y, int32_t c, int32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t x);
extern void func_020204e0(void *p);
extern void func_02031e84(Pair *a, Pair b, void *c, void *d);
void func_02031ecc(uint8_t *self, Node *node);
}

#define FIELD(T, p, off) (*(T *)((uint8_t *)(p) + (off)))

void func_02031ecc(uint8_t *self, Node *node) {
    if (node == 0) {
        FIELD(Obj *, self, 0xd8)->m11();
        return;
    }
    if (FIELD(Obj *, self, 0xd8)->m12() != 0) {
        FIELD(Obj *, self, 0xd8)->m10();
        Pair t = node->getPos();
        Pair p; p.a = t.a - 9; p.b = t.b + 6;
        FIELD(Obj *, self, 0xd8)->setPos(p);
    } else {
        func_02056c4c(FIELD(void *, self, 0xd4));
        Pair t = node->getPos();
        Pair p; p.a = t.a - 9; p.b = t.b + 6;
        Pair q = FIELD(Obj *, self, 0xd8)->getPos();
        func_02056bc0(FIELD(void *, self, 0xd4), func_02062a78(FIELD(Obj *, self, 0xd8), q, p, 10, -5));
        func_02021338(0xb9);
    }
    for (uint32_t i = 0; i < FIELD(uint32_t, self, 0xec); i++) {
        if ((uint32_t)node == FIELD(uint32_t *, self, 0xc4)[i]) {
            func_020204e0(FIELD(void *, self, 0xb8));
            Pair P;
            P.b = FIELD(int32_t, self, 0xe4) - FIELD(int32_t, self, 0xfc) - FIELD(int32_t, self, 0x108);
            P.a = FIELD(int32_t, self, 0xe0) - FIELD(int32_t, self, 0xf8) - FIELD(int32_t, self, 0x104);
            func_02031e84(&P, *(Pair *)((uint8_t *)node + 0xac), FIELD(void *, self, 0xbc), FIELD(void *, self, 0xb8));
            FIELD(void *, self, 0x114) = node;
        }
    }
}
