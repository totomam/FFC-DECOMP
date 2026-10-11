#include "ffc/types.h"

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
} List;

Node *func_02077c6c(List *l, Node *n) {
    Node *p = n->prev;
    Node *nx = n->next;
    if (p) {
        p->next = nx;
    } else {
        l->head = nx;
    }
    if (nx) {
        nx->prev = p;
    } else {
        l->tail = p;
    }
    return p;
}
