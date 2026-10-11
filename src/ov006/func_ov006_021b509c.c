#include "ffc/types.h"
typedef struct Node { struct Node *next; struct Node *prev; } Node;
extern uint32_t func_02086700(uint32_t arg);
extern void func_020866dc(uint32_t a);
void func_ov006_021b509c(Node *head, Node *n)
{
    uint32_t r = func_02086700(1);
    head->next->prev = n;
    n->next = head->next;
    n->prev = head;
    head->next = n;
    func_020866dc(r);
}
