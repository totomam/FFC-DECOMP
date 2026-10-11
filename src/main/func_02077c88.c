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

Node *func_02077c88(List *list, Node *node, Node *after) {
    Node *next;
    node->prev = after;
    if (after != 0) {
        next = after->next;
        after->next = node;
    } else {
        next = list->head;
        list->head = node;
    }
    node->next = next;
    if (next != 0) {
        next->prev = node;
    } else {
        list->tail = node;
    }
    return node;
}
