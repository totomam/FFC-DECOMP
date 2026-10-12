#include "ffc/types.h"

typedef struct Node {
    uint32_t v;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Inner {
    uint8_t pad[0x2c];
    uint32_t f2c;
} Inner;

typedef struct Outer {
    uint8_t pad[0x40];
    Inner *f40;
} Outer;

typedef struct Self {
    uint8_t pad[0x40];
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t count;
    uint32_t f50;
    Node **arr;
} Self;

extern void func_02075d1c(Self *p);
extern uint32_t func_02073870(uint32_t x);
extern uint32_t func_02073890(uint32_t x);
extern uint32_t func_02073868(uint32_t x);
extern uint32_t func_02073844(uint32_t x);
extern void *func_02056830(uint32_t size);
extern void *func_0205681c(uint32_t size);
extern Outer *data_0213e1f8;

void func_02075ca4(Self *p) {
    uint32_t i;
    func_02075d1c(p);
    p->f40 = func_02073870(data_0213e1f8->f40->f2c);
    p->f44 = func_02073890(data_0213e1f8->f40->f2c);
    p->count = func_02073868(data_0213e1f8->f40->f2c);
    p->f48 = func_02073844(data_0213e1f8->f40->f2c);
    p->arr = func_02056830(p->count << 2);
    for (i = 0; i < p->count; i++) {
        Node *n = func_0205681c(0xc);
        if (n != 0) {
            Node *h;
            n->v = 0;
            h = (Node *)((uint8_t *)n + 4);
            h->next = h;
            n->next = h;
        }
        p->arr[i] = n;
    }
}
