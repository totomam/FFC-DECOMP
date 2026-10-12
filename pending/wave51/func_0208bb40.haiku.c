#include "ffc/types.h"

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    int32_t key;
    struct Node *next;
} Node;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);

void func_0208bb40(Node **head, Node *node, int32_t key, int32_t mode)
{
    Node *cur;
    Node *prev;
    Node *found;
    uint32_t saved;

    if (head != 0) {
        node->key = key;
        saved = func_02088978();
        prev = 0;
        cur = *head;
        while (cur != 0) {
            if (mode == 0 && cur->key > key) {
                break;
            }
            if (mode == 1 && cur->key >= key) {
                break;
            }
            prev = cur;
            cur = cur->next;
        }
        found = 0;
        if (cur != 0) {
            found = cur;
        }
        node->next = found;
        if (prev != 0) {
            prev->next = node;
        } else {
            *head = node;
        }
        func_0208898c(saved);
    }
}
