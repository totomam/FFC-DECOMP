#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    struct Node **link;
    uint8_t flag;
} Node;

typedef struct List {
    uint32_t count;
    Node *head;
    Node *tail;
} List;

extern void func_02091a24(void *);
extern uint32_t func_0208f42c(void);
extern Node *func_0205681c(uint32_t size);
extern void func_020258b4(Node *node, Node *head);
extern void func_02056844(void *p);
extern uint8_t data_020ad830[];
extern uint8_t data_020ad7a0[];

Node *func_02025764(List *list, Node **link, int isHead, Node *p3, uint8_t *p5)
{
    struct { Node *volatile p3v; uint32_t a,b,c; Node **volatile headp; Node *volatile tmp; } v;
    Node *node;

    v.p3v = p3;
    if (list->count == 0xFFFFFFFF) {
        func_02091a24(data_020ad830);
        func_0208f42c();
    }

    node = func_0205681c(0x10);
    if (node == 0) {
        func_02091a24(data_020ad7a0);
        func_0208f42c();
    }

    v.headp = &list->head;
    v.tmp = node;
    { uint8_t *fp = (uint8_t*)node + 0xc;
    if (fp != 0) {
        *fp = *p5;
    }
    }
    node = v.tmp;
    node->prev = 0;
    v.tmp = 0;
    node->next = 0;
    { Node ***lp = (Node ***)((uint8_t*)node + 8);
    if (lp != 0) *lp = link; }

    if (isHead) {
        link[0] = node;
    } else {
        link[1] = node;
    }

    list->count++;
    func_020258b4(node, list->head);

    if (v.p3v != 0) {
        list->tail = node;
    }

    { Node *t = v.tmp;
    if (t != 0) {
        func_02056844(t); }
    }
    return node;
}
