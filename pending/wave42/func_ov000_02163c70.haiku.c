#include "ffc/types.h"

typedef struct Node {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    struct Node *next;
} Node;

typedef struct Mgr {
    Node *head;
    uint32_t total;
} Mgr;

extern Mgr data_ov000_02170964;
extern void func_ov000_021591a8(int a, uint32_t b, uint32_t c);

int func_ov000_02163c70(int (*cb)(uint32_t, uint32_t, uint32_t, int)) {
    Node *node;
    int tries;

    node = data_ov000_02170964.head;
    while (node != 0) {
        for (tries = 0; tries < 3; tries++) {
            if (cb(node->a, node->b, node->c, 1) == 0) {
                data_ov000_02170964.total -= node->c;
                func_ov000_021591a8(4, node->b, node->c);
                node->b = 0;
                node->c = 0;
                node->a = 0;
                break;
            }
        }
        if (tries == 3) {
            break;
        }
        node = node->next;
    }

    node = data_ov000_02170964.head;
    while (node != 0) {
        if (node->b != 0) {
            break;
        }
        data_ov000_02170964.head = node->next;
        func_ov000_021591a8(4, (uint32_t)node, 0);
        node = data_ov000_02170964.head;
    }
    return node == 0;
}
