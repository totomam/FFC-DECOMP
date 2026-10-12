#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void);
extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov001_0217894c(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d);
extern void func_ov001_0217c628(void *owner, void *node);
extern uint32_t data_ov001_0219100c[];

typedef struct Node {
    uint32_t type;
    uint32_t f4;
    uint32_t f8;
    struct Node *next;
    uint32_t f10;
    uint32_t limit;
} Node;

typedef struct Owner {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint8_t pad[0x44 - 0x14];
    Node *head;
    Node *end;
} Owner;

typedef struct Obj {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Obj;

typedef struct Pair {
    uint32_t x;
    uint32_t y;
} Pair;

void func_ov001_0217bf3c(void *a, Owner *b)
{
    Node *n = b->head;
    if (b == 0) {
        return;
    }
    while (n != 0 && n != b->end) {
        if (n->type != 2) {
            if (func_ov000_0216591c() > n->limit) {
                if (n->f8 != 0) {
                    if (n->f10 == 0x68) {
                        Obj *o = (Obj *)func_ov000_021653d4(0x10);
                        Pair local;
                        Pair *pp = &local;
                        *pp = *(Pair *)&n->f8;
                        o->b = 0;
                        o->d = 0;
                        o->c = 0;
                        o->a = b->f10;
                        func_ov001_0217894c(a, pp->x, pp->y, o, 0, 0);
                    }
                    func_ov000_021652a8(1, 4, 8, data_ov001_0219100c);
                    func_ov001_0217c628(b, n);
                }
            }
        }
        n = n->next;
    }
}
