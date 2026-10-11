#include "ffc/types.h"

typedef struct Node {
    uint8_t pad[0x78];
    struct Node *f78;
    struct Node *f7c;
    struct Node *f80;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
} List;

Node *func_02086b94(List *l)
{
    Node *n = l->head;
    if (n != 0) {
        Node *nx = n->f80;
        l->head = nx;
        if (nx != 0) {
            nx->f7c = 0;
        } else {
            l->tail = 0;
            n->f78 = 0;
        }
    }
    return n;
}
