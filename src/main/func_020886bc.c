#include "ffc/types.h"

typedef struct Node {
    uint32_t a[5];
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Glob {
    uint32_t a[3];
    Node *tail;
    Node *head;
} Glob;

extern Glob data_02141874;
extern void func_020887cc(Node *n);

void func_020886bc(Node *node) {
    Node *old = data_02141874.head;
    node->next = old;
    node->prev = 0;
    data_02141874.head = node;
    if (old != 0) {
        old->prev = node;
        return;
    }
    data_02141874.tail = node;
    func_020887cc(node);
}
