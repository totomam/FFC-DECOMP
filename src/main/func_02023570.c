#include "ffc/types.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

extern void func_02056844(Node *n);

void func_02023570(Node **out, uint32_t *count, Node **head)
{
    Node *x = *head;
    *head = x->next;
    x->prev->next = x->next;
    x->next->prev = x->prev;
    func_02056844(x);
    (*count)--;
    *out = *head;
}
