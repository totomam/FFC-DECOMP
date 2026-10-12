#include "ffc/types.h"

typedef struct Node {
    void *f0;
    uint32_t f4;
    uint8_t f8;
} Node;

typedef struct Obj {
    uint8_t pad0[0x40];
    uint32_t f40;
    uint8_t pad1[0x8];
    uint32_t f4c;
    uint8_t pad2[0x4];
    void **f54;
} Obj;

typedef struct Sub {
    uint8_t pad[0x2c];
    uint32_t f2c;
} Sub;

typedef struct Game {
    uint8_t pad[0x40];
    Sub *f40;
} Game;

extern void *func_0205681c(uint32_t size);
extern void *func_02056830(uint32_t v);
extern void func_02084ca4(void *a, void *b, uint32_t c);
extern void func_02023514(void *a, void *b, void *c, void *d);
extern uint32_t func_02073878(uint32_t v);
extern void func_02074cc8(Sub *p, void *b, uint32_t c, uint32_t d);
extern void func_02074ce0(Sub *p, uint32_t i, void *b, uint32_t c, uint32_t d);
extern Game *data_0213e1f8;

void func_02075e3c(Obj *a, uint32_t mask, void *b, uint32_t val)
{
    Node *obj;
    void *tmp1;
    void *elem;
    void *tmp2;
    uint8_t i;

    if (mask & (1u << a->f40)) {
        Node *n = (Node *)func_0205681c(12);
        if (n) {
            n->f4 = val;
            n->f8 = 0;
            n->f0 = func_02056830(val);
            func_02084ca4(b, n->f0, val);
        }
        obj = n;
        elem = a->f54[a->f40];
        tmp2 = (uint8_t *)elem + 4;
        func_02023514(&tmp1, elem, &tmp2, &obj);
        mask &= ~(1u << a->f40);
    }

    if (a->f4c > 2) {
        if (mask == func_02073878(data_0213e1f8->f40->f2c)) {
            func_02074cc8(data_0213e1f8->f40, b, (uint16_t)val, 0);
            return;
        }
    }

    for (i = 0; i < a->f4c; i++) {
        if (mask & (1u << i)) {
            func_02074ce0(data_0213e1f8->f40, i, b, (uint16_t)val, 0);
        }
    }
}
