#include "ffc/types.h"

typedef struct Node {
    uint8_t pad0[0x70];
    uint32_t key;
    uint8_t pad1[0x7c - 0x74];
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
} List;

void func_02086b38(List *list, Node *n) {
    Node *cur = list->head;
    while (cur != 0 && cur->key <= n->key) {
        if (cur == n) {
            return;
        }
        cur = cur->next;
    }
    if (cur == 0) {
        Node *tail = list->tail;
        if (tail == 0) {
            list->head = n;
        } else {
            tail->next = n;
        }
        n->prev = tail;
        n->next = 0;
        list->tail = n;
    } else {
        Node *prev = cur->prev;
        if (prev == 0) {
            list->head = n;
        } else {
            prev->next = n;
        }
        n->prev = prev;
        n->next = cur;
        cur->prev = n;
    }
}
