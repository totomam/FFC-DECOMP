#include "ffc/types.h"

typedef struct Node Node;
struct Node {
    uint8_t pad0[0xc];
    uint32_t key;
    int16_t pri;
    uint8_t pad1[2];
    Node *next;
    Node *prev;
};

extern uint8_t data_02141874[];
extern void func_020887cc(void *node);
extern void func_020886bc(void *node);

void func_02088670(Node *node)
{
    Node *p = *(Node **)(data_02141874 + 0xc);
    if (p != 0) {
        do {
            if (p->key >= node->key) {
                if (p->key != node->key || p->pri > node->pri) {
                    Node *n = p->next;
                    node->next = n;
                    node->prev = p;
                    p->next = node;
                    if (n != 0) {
                        n->prev = node;
                        return;
                    }
                    *(Node **)(data_02141874 + 0xc) = node;
                    func_020887cc(node);
                    return;
                }
            }
            p = p->prev;
        } while (p != 0);
    }
    func_020886bc(node);
}
