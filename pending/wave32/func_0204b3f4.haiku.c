#include "ffc/types.h"

typedef struct Node {
    uint32_t pad;
    struct Node *next;
    uint32_t key;
} Node;

Node *func_0204b3f4(Node **pp, uint32_t key)
{
    Node *found = 0;
    Node *head = *pp;
    if (head != 0) {
        if (head->key == key) {
            found = head;
        } else {
            Node *n = head->next;
            if (n != head) {
                do {
                    if (n->key == key) {
                        found = n;
                        break;
                    }
                    n = n->next;
                } while (n != head);
            }
        }
    }
    return found;
}
