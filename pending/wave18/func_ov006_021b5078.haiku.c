#include "ffc/types.h"

extern void func_02086700(int32_t x);
extern void func_020866dc(void);

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

void func_ov006_021b5078(Node *p)
{
    func_02086700(1);
    p->prev->next = p->next;
    p->next->prev = p->prev;
    p->next = 0;
    p->prev = 0;
    func_020866dc();
}
