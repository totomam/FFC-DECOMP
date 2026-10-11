#include "ffc/types.h"

extern uint32_t data_ov006_021ba0a8[];

typedef struct Node {
    uint8_t pad[0x4bc];
    struct Node *next;
} Node;

void func_ov006_0219afe4(Node *p) {
    Node *q = *(Node **)((uint8_t *)data_ov006_021ba0a8 + 0x18);
    if (q == 0) {
        *(Node **)((uint8_t *)data_ov006_021ba0a8 + 0x18) = p;
    } else {
        Node *n = q->next;
        if (n != 0) {
            do {
                q = n;
                n = q->next;
            } while (n != 0);
        }
        q->next = p;
    }
    p->next = 0;
}
