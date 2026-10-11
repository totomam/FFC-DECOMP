#include "ffc/types.h"

typedef struct Node {
    uint8_t pad[0x24];
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    uint32_t count;
} List;

void func_ov001_021856b8(List *l, Node *n)
{
    if (l->tail != 0) {
        l->tail->next = n;
    }
    l->tail = n;
    n->next = 0;
    if (l->head == 0) {
        l->head = n;
    }
    l->count++;
}
