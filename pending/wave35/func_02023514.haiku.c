#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern void func_02056844(void *p);
extern uint32_t data_020ad780[];

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    uint32_t val;
} Node;

typedef struct Head {
    Node *first;
} Head;

void func_02023514(Node **out, uint32_t *count, Head **list, uint32_t *val)
{
    Node *node = (Node *)func_0205681c(12);
    Node *tmp;
    uint32_t *pv;
    Head *h;

    if (node == 0) {
        func_02091a24(data_020ad780);
        func_0208f42c();
    }
    tmp = node;
    pv = &node->val;
    if (pv != 0) {
        *pv = *val;
    }
    h = *list;
    tmp->next = h->first;
    h->first->prev = tmp;
    h->first = tmp;
    tmp->prev = (Node *)h;
    (*count)++;
    *out = tmp;
    node = 0;
    if (node != 0) {
        func_02056844(node);
    }
}
