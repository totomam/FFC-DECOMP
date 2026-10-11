#include "ffc/types.h"

typedef struct Node {
    uint32_t a;
    uint32_t b;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
} List;

Node *func_02077c88(List *l, Node *n, Node *after) {
    Node *nxt;
    n->prev = after;
    if (after != 0) {
        nxt = after->next;
        after->next = n;
    } else {
        nxt = l->head;
        l->head = n;
    }
    n->next = nxt;
    if (nxt != 0) {
        nxt->prev = n;
    } else {
        l->tail = n;
    }
    return n;
}
