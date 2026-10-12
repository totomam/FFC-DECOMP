#include "ffc/types.h"

struct Node;
struct S;

extern void func_02077b34(void *a, void *b);
extern void func_02077aa4(void *a, void *b);
extern uint8_t data_0213e258[];
extern uint8_t data_0213e24c[];

struct Node {
    uint8_t pad[0xc];
    uint32_t link;
};

struct S {
    uint32_t *f0;
    struct Node *f4;
    struct Node *f8;
    uint8_t pad[0x20];
    uint8_t flag;
};

void func_02079f8c(struct S *s) {
    struct Node *n;

    if (s->f0 != 0) {
        *s->f0 = 0;
        s->f0 = 0;
    }
    n = s->f4;
    func_02077b34(n, s);
    s->f4 = 0;
    if (s->f8 != 0) {
        func_02077aa4(&n->link, s->f8);
        s->f8->link = 0;
        s->f8 = 0;
    }
    func_02077b34(data_0213e258, s);
    func_02077aa4(data_0213e24c, s);
    s->flag = 0;
}
