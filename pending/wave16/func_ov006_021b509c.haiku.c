#include "ffc/types.h"

typedef struct Node {
    struct Node *link0;
    struct Node *link4;
} Node;

extern void func_02086700(uint32_t arg);
extern void func_020866dc(void);

void func_ov006_021b509c(Node **head, Node *n)
{
    func_02086700(1);
    (*head)->link4 = n;
    n->link0 = *head;
    n->link4 = (Node *)head;
    *head = n;
    func_020866dc();
}
