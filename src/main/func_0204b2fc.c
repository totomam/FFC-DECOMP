#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;

Node *func_0204b2fc(Node **head) {
    Node *p = *head;
    if (p != 0) {
        if (p != p->next) {
            p->next->prev = p->prev;
            p->prev->next = p->next;
            *head = p->prev;
        } else {
            *head = 0;
        }
    }
    return p;
}
