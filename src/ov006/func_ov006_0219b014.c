#include "ffc/types.h"

typedef struct Node {
    uint8_t pad[0x4bc];
    struct Node *next;
} Node;

typedef struct Mgr {
    uint8_t pad0[0x18];
    Node *head;
    Node *active;
} Mgr;

extern Mgr data_ov006_021ba0a8;
extern uint8_t data_ov006_021ba0c8[];
extern int func_ov006_0219b100(void);

int func_ov006_0219b014(Node *node)
{
    Node *cur = data_ov006_021ba0a8.head;
    Node *prev;

    while (cur != 0) {
        if (cur != node) {
            prev = cur;
            cur = cur->next;
            continue;
        }
        {
            if (cur == data_ov006_021ba0a8.head) {
                data_ov006_021ba0a8.head = data_ov006_021ba0a8.head->next;
            } else {
                prev->next = cur->next;
            }
            if (node == data_ov006_021ba0a8.active) {
                data_ov006_021ba0a8.active = 0;
                if (func_ov006_0219b100() == 0) {
                    data_ov006_021ba0c8[4] = 1;
                }
            }
            return 1;
        }
    }
    return 0;
}
