#include "ffc/types.h"

typedef struct Node {
    uint8_t pad[0x7c];
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
} List;

Node *func_02086bb8(List *l, Node *t) {
    Node *cur = l->head;
    while (cur) {
        Node *next = cur->next;
        if (cur == t) {
            Node *prev = cur->prev;
            if (l->head == cur) {
                l->head = next;
            } else {
                prev->next = next;
            }
            if (l->tail == cur) {
                l->tail = prev;
            } else {
                next->prev = prev;
            }
            break;
        }
        cur = next;
    }
    return cur;
}
