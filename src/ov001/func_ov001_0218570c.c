#include "ffc/types.h"

typedef struct Node {
    uint8_t pad[0x24];
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    uint32_t count;
} List;

int func_ov001_0218570c(List *list, Node *target) {
    Node *cur = list->head;
    Node *prev = 0;
    while (cur != 0) {
        if (cur == target) {
            if (prev != 0) {
                prev->next = cur->next;
            }
            if (list->head == cur) {
                list->head = cur->next;
            }
            if (list->tail == cur) {
                list->tail = prev;
            }
            list->count--;
            return 1;
        }
        prev = cur;
        cur = cur->next;
    }
    return 0;
}
