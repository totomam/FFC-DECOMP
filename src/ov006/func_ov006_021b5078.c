#include "ffc/types.h"

extern int32_t func_02086700(int32_t x);
extern void func_020866dc(int32_t);

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

void func_ov006_021b5078(Node *p)
{
    Node *n;
    Node *q;
    int32_t r = func_02086700(1);
    n = p->next;
    p->prev->next = n;
    q = p->prev;
    p->next->prev = q;
    p->next = 0;
    p->prev = 0;
    func_020866dc(r);
}
