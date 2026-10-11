#include "ffc/types.h"

extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov000_02170964[2];

typedef struct Node {
    uint32_t pad0;
    uint32_t a;
    uint32_t b;
    struct Node *next;
} Node;

void func_ov000_02163c0c(void)
{
    Node *p = (Node *)data_ov000_02170964[0];
    while (p != 0) {
        data_ov000_02170964[0] = (uint32_t)p->next;
        func_ov000_021591a8(4, p->a, p->b);
        func_ov000_021591a8(4, (uint32_t)p, 0);
        p = (Node *)data_ov000_02170964[0];
    }
    data_ov000_02170964[0] = 0;
    data_ov000_02170964[1] = 0;
}
