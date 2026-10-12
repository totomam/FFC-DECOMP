#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void *func_02062a78(void *o, int32_t x, int32_t y, int32_t a, int32_t b, int32_t c, int32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t x);
extern void func_020204e0(void *p);
extern void func_02031e84(void *a, void *b, void *c, void *d);

typedef struct { int32_t a; int32_t b; } Pair;

#define FIELD(T, p, off) (*(T *)((uint8_t *)(p) + (off)))
#define VT(o) (*(void ***)(o))

void func_02031ecc(uint8_t *self, uint8_t *node) {
    Pair t4c, t3c, t1c;
    Pair p24, p14;
    Pair P, Q;
    void *o;
    uint32_t i;

    if (node == 0) {
        o = FIELD(void *, self, 0xd8);
        ((void (*)(void *))VT(o)[11])(o);
        return;
    }

    o = FIELD(void *, self, 0xd8);
    if (((int32_t (*)(void *))VT(o)[12])(o) != 0) {
        o = FIELD(void *, self, 0xd8);
        ((void (*)(void *))VT(o)[10])(o);
        ((void (*)(Pair *, void *))VT(node)[4])(&t4c, node);
        p24.a = t4c.a - 9;
        p24.b = t4c.b + 6;
        o = FIELD(void *, self, 0xd8);
        ((void (*)(void *, int32_t, int32_t))VT(o)[3])(o, p24.a, p24.b);
    } else {
        func_02056c4c(FIELD(void *, self, 0xd4));
        ((void (*)(Pair *, void *))VT(node)[4])(&t3c, node);
        p14.a = t3c.a - 9;
        p14.b = t3c.b + 6;
        o = FIELD(void *, self, 0xd8);
        ((void (*)(Pair *, void *))VT(o)[4])(&t1c, o);
        o = FIELD(void *, self, 0xd8);
        func_02056bc0(FIELD(void *, self, 0xd4), func_02062a78(o, t1c.a, t1c.b, p14.a, p14.b, 10, -5));
        func_02021338(0xb9);
    }

    for (i = 0; i < FIELD(uint32_t, self, 0xec); i++) {
        uint32_t *arr = FIELD(uint32_t *, self, 0xc4);
        if ((uint32_t)node == arr[i]) {
            func_020204e0(FIELD(void *, self, 0xb8));
            P.b = FIELD(int32_t, self, 0xe4) - FIELD(int32_t, self, 0xfc) - FIELD(int32_t, self, 0x108);
            P.a = FIELD(int32_t, self, 0xe0) - FIELD(int32_t, self, 0xf8) - FIELD(int32_t, self, 0x104);
            Q = *(Pair *)(node + 0xac);
            func_02031e84(&P, &Q, FIELD(void *, self, 0xbc), FIELD(void *, self, 0xb8));
            FIELD(void *, self, 0x114) = node;
        }
    }
}
